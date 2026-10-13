#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8081
#define BUFFER_SIZE 1024

int main() {
    int sock;
    struct sockaddr_in server_addr;
    socklen_t server_len = sizeof(server_addr);
    char message[BUFFER_SIZE];
    char buffer[BUFFER_SIZE] = {0};

    sock = socket(AF_INET, SOCK_DGRAM, 0);

    if (sock < 0) {
        perror("Socket creation failed");
        return 1;
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);

    inet_pton(AF_INET, "127.0.0.1",
              &server_addr.sin_addr);

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    sendto(sock, message, strlen(message), 0,
           (struct sockaddr *)&server_addr, server_len);

    int n = recvfrom(sock, buffer, BUFFER_SIZE - 1, 0,
                     (struct sockaddr *)&server_addr, &server_len);

    if (n > 0) {
        buffer[n] = '\0';
        printf("Server reply: %s\n", buffer);
    } else {
        perror("No reply received");
    }

    close(sock);
    return 0;
}
