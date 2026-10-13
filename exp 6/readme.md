# Experiment 6: DNS Analysis using Wireshark

## Aim
To analyze DNS queries and responses using command-line tools and Wireshark.

## Software Required
- Windows Command Prompt
- Wireshark
- Internet connection

## Commands Used
- `ipconfig` — Displays IP configuration.
- `nslookup www.google.com` — Resolves a domain name to an IP address.
- `ipconfig /displaydns` — Displays cached DNS records.
- `ipconfig /flushdns` — Clears the DNS resolver cache.
- `ping www.google.com` — Tests connectivity to the domain.

## Wireshark Procedure
1. Open Wireshark.
2. Select the active network interface and start capturing packets.
3. Open Command Prompt and execute `nslookup www.google.com`.
4. Return to Wireshark and apply the display filter `dns`.
5. Inspect the DNS query and corresponding response.
6. Observe the queried domain name, response records, and destination/source ports.

## Observation
DNS translates domain names into IP addresses. DNS queries commonly use UDP port 53, although TCP port 53 may also be used.

## Result
DNS queries and responses were analyzed using command-line tools and Wireshark.
