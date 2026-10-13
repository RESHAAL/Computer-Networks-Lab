# Experiment 1B: File Sharing Within an Organization

## Aim
To share files between computers within an organization using an IP address.

## Theory
File sharing allows users on the same network to access files and folders stored on another computer. The host computer shares a folder, and other authorized computers access it using the host's IP address and shared folder name.

## Requirements
- Two Windows computers connected to the same network
- A folder containing files to share
- Network sharing permissions

## Procedure
1. Create a folder on the host computer.
2. Open Properties → Sharing → Advanced Sharing.
3. Enable folder sharing and configure suitable permissions.
4. Run `ipconfig` in Command Prompt to find the host's IPv4 address.
5. Run `ping <IP_ADDRESS>` from the second computer to test connectivity.
6. Open File Explorer on the second computer.
7. Enter `\\<IP_ADDRESS>\<SHARED_FOLDER_NAME>` to access the shared folder.

## Commands
- `ipconfig` — displays network configuration.
- `ping <IP_ADDRESS>` — tests network connectivity.
- `\\<IP_ADDRESS>\<SHARED_FOLDER_NAME>` — opens the shared network folder.

## Result
File sharing between computers on a network was successfully demonstrated using an IP address.
