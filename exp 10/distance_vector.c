
#include <stdio.h>

#define MAX_NODES 10
#define INF 9999

struct Node {
    int dist[MAX_NODES];
    int from[MAX_NODES];
} rt[MAX_NODES];

int main() {
    int cost[MAX_NODES][MAX_NODES];
    int nodes, i, j, k;
    int updated, iteration;

    printf("Enter number of nodes: ");
    scanf("%d", &nodes);

    if (nodes < 1 || nodes > MAX_NODES) {
        printf("Invalid number of nodes!\n");
        return 1;
    }

    printf("Enter cost matrix row by row (use 999 for no connection):\n");

    for (i = 0; i < nodes; i++) {
        for (j = 0; j < nodes; j++) {
            int v;
            scanf("%d", &v);
            cost[i][j] = (v == 999) ? INF : v;
        }
    }

    for (i = 0; i < nodes; i++) {
        cost[i][i] = 0;

        for (j = 0; j < nodes; j++) {
            rt[i].dist[j] = cost[i][j];

            if (cost[i][j] < INF && i != j)
                rt[i].from[j] = j;
            else
                rt[i].from[j] = -1;
        }
    }

    for (iteration = 0; iteration < nodes - 1; iteration++) {
        updated = 0;

        for (i = 0; i < nodes; i++) {
            for (j = 0; j < nodes; j++) {
                for (k = 0; k < nodes; k++) {
                    if (cost[i][k] >= INF ||
                        rt[k].dist[j] >= INF)
                        continue;

                    int newdist = cost[i][k] + rt[k].dist[j];

                    if (newdist < rt[i].dist[j]) {
                        rt[i].dist[j] = newdist;
                        rt[i].from[j] = k;
                        updated = 1;
                    }
                }
            }
        }

        if (!updated)
            break;
    }

    for (i = 0; i < nodes; i++) {
        printf("\nRouting table for Node %d:\n", i);
        printf("Destination\tNext Hop\tDistance\n");

        for (j = 0; j < nodes; j++) {
            if (rt[i].dist[j] >= INF) {
                printf("%d\t\t-\t\tINF\n", j);
            } else if (i == j) {
                printf("%d\t\t-\t\t0\n", j);
            } else {
                printf("%d\t\t%d\t\t%d\n",
                       j, rt[i].from[j], rt[i].dist[j]);
            }
        }
    }

    return 0;
}
