
#include <stdio.h>

int main() {
    int bucket_size, n, i, incoming, outgoing;
    int stored = 0;

    printf("Leaky Bucket Algorithm Simulation\n");

    printf("Enter bucket size (capacity): ");
    scanf("%d", &bucket_size);

    printf("Enter outgoing rate: ");
    scanf("%d", &outgoing);

    printf("Enter number of packets (time units): ");
    scanf("%d", &n);

    if (bucket_size <= 0 || outgoing <= 0 || n <= 0) {
        printf("Invalid input.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("\nTime unit %d:\n", i + 1);
        printf("Enter number of incoming packets: ");
        scanf("%d", &incoming);

        if (incoming < 0) {
            printf("Invalid packet count.\n");
            return 0;
        }

        if (incoming + stored > bucket_size) {
            printf("Bucket overflow! Packet loss = %d\n",
                   incoming + stored - bucket_size);
            stored = bucket_size;
        } else {
            stored += incoming;
        }

        if (stored <= outgoing) {
            printf("Packets sent: %d\n", stored);
            stored = 0;
        } else {
            printf("Packets sent: %d\n", outgoing);
            stored -= outgoing;
        }

        printf("Packets remaining in bucket: %d\n", stored);
    }

    while (stored > 0) {
        printf("\nDraining remaining packets...\n");

        if (stored <= outgoing) {
            printf("Packets sent: %d\n", stored);
            stored = 0;
        } else {
            printf("Packets sent: %d\n", outgoing);
            stored -= outgoing;
        }

        printf("Packets left in bucket: %d\n", stored);
    }

    printf("\nSimulation complete.\n");
    return 0;
}
