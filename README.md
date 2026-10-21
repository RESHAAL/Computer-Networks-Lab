# Computer Networks Laboratory Practicals

This repository contains practical implementations and experiments performed as part of the **Computer Networks Laboratory**. It covers network communication using TCP and UDP, DNS analysis, packet analysis, flow control, traffic shaping, and routing algorithms.

## 📚 Experiments Included

| Experiment | Practical Name | Files / Concepts |
|---|---|---|
| 1A | Fundamental Elements of Computer Networking | README.md — Network topologies, transmission media, networking devices, RJ-45 connector and T568A/T568B color coding |
| 1B | File Sharing Within an Organization | `commands.txt`, `README.md` — Windows network and folder sharing |
| 2 | TCP Server | `tcp_server.c` — TCP socket programming |
| 3 | TCP Client | `tcp_client.c` — TCP client-server communication |
| 4 | UDP Server | `udp_server.c` — UDP socket programming |
| 5 | UDP Client | `udp_client.c` — UDP communication |
| 6 | DNS Analysis Using Wireshark | `commands.txt`, `output.txt` — DNS queries and cache analysis |
| 7 | Application Layer Packet Analysis | `commands.txt`, `output.txt` — DNS and HTTP packet analysis |
| 8 | Sliding Window Protocol | `go_back_n.c` — Go-Back-N ARQ simulation |
| 9A | Leaky Bucket Algorithm | `leaky_bucket.c` — Traffic shaping and packet handling |
| 9B | Token Bucket Algorithm | `token_bucket.c` — Token-based traffic control |
| 10 | Distance Vector Routing | `distance_vector.c` — Routing tables and shortest paths |

## 🛠️ Technologies and Tools

- **Programming Language:** C
- **Networking Concepts:** TCP, UDP, DNS, HTTP, ARQ, traffic shaping, routing
- **Tools:** GCC compiler, Wireshark, Windows Command Prompt
- **Operating Systems:** Windows and Linux, depending on the practical

## 🚀 How to Run the C Programs

### Prerequisites

1. Install a C compiler such as GCC.
2. Open a terminal in the folder containing the program.
3. Compile the required source file and run the executable.

### TCP Server

```bash
gcc tcp_server.c -o tcp_server
./tcp_server
```

### TCP Client

```bash
gcc tcp_client.c -o tcp_client
./tcp_client
```

### UDP Server

```bash
gcc udp_server.c -o udp_server
./udp_server
```

### UDP Client

```bash
gcc udp_client.c -o udp_client
./udp_client
```

**Important:** Start the appropriate server before running its client. Run the server and client in separate terminals. These examples use POSIX socket APIs, so they are intended for Linux or a compatible environment such as WSL.

### Sliding Window — Go-Back-N ARQ

```bash
gcc go_back_n.c -o go_back_n
./go_back_n
```

### Leaky Bucket

```bash
gcc leaky_bucket.c -o leaky_bucket
./leaky_bucket
```

### Token Bucket

```bash
gcc token_bucket.c -o token_bucket
./token_bucket
```

### Distance Vector Routing

```bash
gcc distance_vector.c -o dv
./dv
```

**Windows note:** On Windows, use a compatible GCC environment such as MinGW where supported, or use WSL for programs that rely on POSIX sockets.

## 🔍 DNS and Packet Analysis

For Experiments 6 and 7:

1. Open Command Prompt or a terminal.
2. Run the DNS commands provided in the relevant experiment folder.
3. Open Wireshark and select the active network interface.
4. Generate network traffic using DNS queries or HTTP requests.
5. Apply the relevant display filter:
   - `dns` — DNS packets
   - `http` — HTTP packets, where visible
6. Observe the packet details and save the required output or screenshots.

**Note:** Actual command output and captured packets may differ depending on the operating system, network configuration, DNS cache, and website availability. HTTPS traffic is not normally readable as plain HTTP.

## 🎯 Learning Outcomes

Through these practicals, the repository demonstrates:

- Understanding basic network communication and file sharing.
- Implementing TCP and UDP client-server programs.
- Examining DNS queries and application-layer packets.
- Understanding sliding-window flow and error-control concepts.
- Simulating Leaky Bucket and Token Bucket traffic-shaping algorithms.
- Calculating routes and distances using the Distance Vector algorithm.
- Using command-line tools and Wireshark for network analysis.

## 📁 Repository Structure

```text
Computer-Networks-Practicals/
├── 01A_Fundamentals_of_Networking/
├── 01B_File_Sharing/
├── 02_TCP_Server/
├── 03_TCP_Client/
├── 04_UDP_Server/
├── 05_UDP_Client/
├── 06_DNS_Analysis/
├── 07_Application_Layer_Packet_Analysis/
├── 08_Go_Back_N_ARQ/
├── 09A_Leaky_Bucket/
├── 09B_Token_Bucket/
├── 10_Distance_Vector_Routing/
└── README.md
```


**Subject:** Computer Networks Laboratory
