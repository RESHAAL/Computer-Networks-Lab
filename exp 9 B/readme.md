# Experiment 9B: Token Bucket Algorithm

## Aim
To implement the Token Bucket algorithm for network traffic control using C.

## Algorithm
1. Initialize the number of tokens to zero.
2. Accept bucket capacity, token generation rate, and number of time units.
3. Add tokens at each time unit.
4. Limit the tokens to the bucket capacity.
5. Read the number of packets to send.
6. If enough tokens are available, send all requested packets.
7. Otherwise, send packets according to the available tokens and drop the excess.
8. Display the remaining tokens.

## Compilation and Execution

```bash
gcc token_bucket.c -o token
./token
```

On Windows, run `token.exe` after compilation.

## Result
The Token Bucket algorithm was implemented to demonstrate token-based traffic control and packet handling.
