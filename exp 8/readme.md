# Experiment 8: Sliding Window Protocol (Go-Back-N ARQ)

## Aim
To simulate the Sliding Window Protocol using the Go-Back-N ARQ technique.

## Algorithm
1. Accept the number of frames and window size.
2. Initialize frame sequence numbers.
3. Send frames within the sender window.
4. Simulate receiver acknowledgments.
5. If all frames are received correctly, slide the window forward.
6. If an error is reported, retransmit from the beginning of the current window.
7. Repeat until all frames are sent successfully.

## Compilation and Execution

```bash
gcc go_back_n.c -o go_back_n
./go_back_n
```

On Windows, run `go_back_n.exe` after compilation.

## Result
The Go-Back-N Sliding Window Protocol was simulated successfully.

## Note
This is a simplified simulation. The receiver and acknowledgments are simulated; this is not a real network implementation.
