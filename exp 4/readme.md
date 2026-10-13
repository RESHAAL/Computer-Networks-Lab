# Experiment 4: UDP Server Socket Programming

## Aim
To implement a UDP server using socket programming in C.

## Theory
UDP (User Datagram Protocol) is a connectionless transport-layer protocol. It sends data in the form of datagrams without establishing a connection. UDP has low overhead but does not guarantee delivery or ordering.

## Requirements
- Linux/Ubuntu terminal
- GCC compiler
- UDP client program from Experiment 5

## Procedure
1. Create a UDP socket using `socket()`.
2. Assign the server address and port using `bind()`.
3. Receive a datagram using `recvfrom()`.
4. Display the received message.
5. Send a reply using `sendto()`.
6. Close the socket using `close()`.

## Compilation and Execution
Compile the server:

```bash
gcc udp_server.c -o udp_server
```

Run the server:

```bash
./udp_server
```

The server listens on UDP port 8081. Run the UDP client in another terminal.

## Important Functions
- `socket()` – Creates a UDP socket.
- `bind()` – Assigns a local address and port.
- `recvfrom()` – Receives a datagram.
- `sendto()` – Sends a datagram.
- `close()` – Closes the socket.

## Result
The UDP server was implemented successfully to receive a client message and send a response.
