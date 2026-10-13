# Experiment 7: Application Layer Packet Analysis

## Aim
To analyze application-layer packets (DNS and HTTP) using Wireshark.

## Tools Required
- Wireshark
- Internet connection
- Web browser
- Windows Command Prompt

## Part A: DNS Packet Analysis
1. Start capturing packets in Wireshark.
2. Execute `nslookup www.google.com` in Command Prompt.
3. Apply the display filter `dns`.
4. Inspect the DNS query and response.
5. Observe the transaction ID, query name, query type, resolved IP address, and TTL.

## Part B: HTTP Packet Analysis
1. Open `http://example.com` in a browser.
2. Apply the Wireshark display filter `http`.
3. Inspect the HTTP GET request.
4. Observe the host, request method, response status, content type, and content length.

## Observations
- DNS commonly uses UDP port 53.
- HTTP commonly uses TCP port 80.
- DNS resolves domain names into IP addresses.
- HTTP requests and responses enable communication between a client and a web server.

## Result
Successfully analyzed DNS and HTTP packets using Wireshark.
