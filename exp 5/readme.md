# Experiment 5: UDP Client Socket Programming

## Aim
To implement a UDP client using socket programming in C.

## Theory
UDP (User Datagram Protocol) is a connectionless protocol that sends data in the form of datagrams. A UDP client sends a message to the server using its IP address and port number and can receive a reply without establishing a TCP-style connection.

## Requirements
- Linux/Ubuntu terminal
- GCC compiler
- UDP server program from Experiment 4

## Procedure
1. Create a UDP socket using `socket()`.
2. Specify the server IP address and port.
3. Send a message using `sendto()`.
4. Receive the server reply using `recvfrom()`.
5. Display the reply.
6. Close the socket using `close()`.

## Compilation and Execution
Compile the client:

```bash
gcc udp_client.c -o udp_client
```

First run the UDP server from Experiment 4:

```bash
./udp_server
```

Then, in another terminal, run:

```bash
./udp_client
```

Both programs use UDP port 8081 and IP address `127.0.0.1`, so this example runs on the same computer.

## Important Functions
- `socket()` – Creates a UDP socket.
- `sendto()` – Sends a datagram.
- `recvfrom()` – Receives a datagram.
- `close()` – Closes the socket.

## Result
The UDP client was implemented successfully to send a message and receive a response from the UDP server.
