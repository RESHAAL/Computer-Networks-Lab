# Experiment 3: TCP Client Socket Programming

## Aim
To implement a TCP client using socket programming in C.

## Theory
TCP (Transmission Control Protocol) provides reliable, connection-oriented communication between a client and a server. The client establishes a connection, sends a message, receives the server's response, and closes the socket.

## Requirements
- Linux/Ubuntu terminal
- GCC compiler
- TCP server program from Experiment 2

## Procedure
1. Create a socket using `socket()`.
2. Specify the server IP address and port.
3. Connect to the server using `connect()`.
4. Send a message using `send()`.
5. Receive the server response using `recv()`.
6. Close the socket using `close()`.

## Compilation and Execution
Compile the client:

```bash
gcc tcp_client.c -o tcp_client
```

Run the TCP server in the first terminal:

```bash
./tcp_server
```

Run the TCP client in a second terminal:

```bash
./tcp_client
```

Both programs use port 8080 and `127.0.0.1`, so they must run on the same computer for this example.

## Important Functions
- `socket()` – Creates a socket.
- `connect()` – Connects to the server.
- `send()` – Sends data.
- `recv()` – Receives data.
- `close()` – Closes the socket.

## Result
The TCP client was implemented successfully and exchanged messages with the TCP server.
