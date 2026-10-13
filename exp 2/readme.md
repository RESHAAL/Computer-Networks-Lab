# Experiment 2: TCP Server Socket Programming

## Aim
To implement a TCP server using socket programming in C.

## Theory
TCP (Transmission Control Protocol) is a connection-oriented protocol that provides reliable and ordered data delivery. A TCP server waits for a client connection, receives data and sends a response.

## Requirements
- Linux/Ubuntu operating system
- GCC compiler
- TCP client program

## Procedure
1. Create a socket using `socket()`.
2. Assign the server IP address and port using `bind()`.
3. Wait for client requests using `listen()`.
4. Accept the client connection using `accept()`.
5. Receive the client message using `recv()`.
6. Send a reply using `send()`.
7. Close the sockets using `close()`.

## Compilation and Execution
Compile the program:

```bash
gcc tcp_server.c -o tcp_server
```

Run the server:

```bash
./tcp_server
```

The server listens on port 8080. Run the TCP client in another terminal to exchange messages.

## Important Functions
- `socket()` – Creates a socket.
- `bind()` – Assigns an address and port.
- `listen()` – Waits for connection requests.
- `accept()` – Accepts a client connection.
- `recv()` – Receives data.
- `send()` – Sends data.
- `close()` – Closes the socket.

## Result
The TCP server was implemented successfully using C socket programming.
