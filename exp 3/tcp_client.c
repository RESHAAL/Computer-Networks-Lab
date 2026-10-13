#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sock;
    struct sockaddr_in server_addr;
    char message[BUFFER_SIZE];
    char buffer[BUFFER_SIZE] = {0};

    sock = socket(AF_INET, SOCK_STREAM, 0);

    if (sock < 0) {
        perror("Socket creation failed");
        return 1;
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);

    inet_pton(AF_INET, "127.0.0.1",
              &server_addr.sin_addr);

    if (connect(sock, (struct sockaddr *)&server_addr,
                sizeof(server_addr)) < 0) {
        perror("Connection failed");
        close(sock);
        return 1;
    }

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    send(sock, message, strlen(message), 0);

    int n = recv(sock, buffer, BUFFER_SIZE - 1, 0);

    if (n > 0) {
        buffer[n] = '\0';
        printf("Server reply: %s\n", buffer);
    }

    close(sock);
    return 0;
}
