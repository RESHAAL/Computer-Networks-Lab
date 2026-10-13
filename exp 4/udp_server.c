#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8081
#define BUFFER_SIZE 1024

int main() {
    int server_fd;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_len = sizeof(client_addr);
    char buffer[BUFFER_SIZE] = {0};

    server_fd = socket(AF_INET, SOCK_DGRAM, 0);

    if (server_fd < 0) {
        perror("Socket creation failed");
        return 1;
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&server_addr,
             sizeof(server_addr)) < 0) {
        perror("Bind failed");
        close(server_fd);
        return 1;
    }

    printf("UDP Server waiting on port %d...\n", PORT);

    int n = recvfrom(server_fd, buffer, BUFFER_SIZE - 1, 0,
                     (struct sockaddr *)&client_addr, &client_len);

    if (n >= 0) {
        buffer[n] = '\0';
        printf("Message from client: %s", buffer);

        char *reply = "Hello from UDP Server!";
        sendto(server_fd, reply, strlen(reply), 0,
               (struct sockaddr *)&client_addr, client_len);
    } else {
        perror("Receive failed");
    }

    close(server_fd);
    return 0;
}
