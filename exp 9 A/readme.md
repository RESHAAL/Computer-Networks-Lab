# Experiment 9A: Leaky Bucket Algorithm

## Aim
To implement the Leaky Bucket algorithm for traffic shaping using C.

## Algorithm
1. Initialize the stored packets to zero.
2. Accept bucket capacity, outgoing rate, and number of time units.
3. Read incoming packets for each time unit.
4. If incoming packets exceed available capacity, drop the excess packets.
5. Send packets at the specified outgoing rate.
6. Display the packets remaining in the bucket.
7. Drain the remaining packets after all time units.

## Compilation and Execution

```bash
gcc leaky_bucket.c -o leaky
./leaky
```

On Windows, execute `leaky.exe` after compilation.

## Result
The Leaky Bucket algorithm was implemented to demonstrate traffic shaping and packet overflow handling.
