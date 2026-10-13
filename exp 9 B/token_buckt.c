
#include <stdio.h>

int main() {
    int bucket_size, n, rate, tokens = 0;
    int incoming, i;

    printf("Token Bucket Algorithm Simulation\n");

    printf("Enter bucket size (capacity): ");
    scanf("%d", &bucket_size);

    printf("Enter token generation rate: ");
    scanf("%d", &rate);

    printf("Enter number of packets (time units): ");
    scanf("%d", &n);

    if (bucket_size <= 0 || rate <= 0 || n <= 0) {
        printf("Invalid input.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("\nTime unit %d:\n", i + 1);

        tokens += rate;

        if (tokens > bucket_size)
            tokens = bucket_size;

        printf("Enter number of packets to send: ");
        scanf("%d", &incoming);

        if (incoming < 0) {
            printf("Invalid packet count.\n");
            return 0;
        }

        if (tokens >= incoming) {
            printf("Packets sent: %d\n", incoming);
            tokens -= incoming;
        } else {
            printf("Only %d tokens available, packets sent: %d, packets dropped: %d\n",
                   tokens, tokens, incoming - tokens);
            tokens = 0;
        }

        printf("Tokens left: %d\n", tokens);
    }

    printf("\nSimulation complete.\n");

    return 0;
}
