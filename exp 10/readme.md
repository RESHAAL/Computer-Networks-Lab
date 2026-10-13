# Experiment 10: Distance Vector Routing

## Aim
To implement the Distance Vector Routing algorithm in C and find the shortest paths between network nodes.

## Algorithm
1. Read the number of nodes and the cost matrix.
2. Initialize each node's distance vector using the given costs.
3. Update distances by checking paths through intermediate nodes.
4. Repeat until no shorter path is found.
5. Display the routing table of each node.

## Compilation and Execution
```bash
gcc distance_vector.c -o dv
./dv
```

## Input
Use a cost matrix where each value represents the cost between two nodes. Enter `999` for no direct connection.

## Result
The Distance Vector Routing algorithm calculates the shortest distances and displays the next hop for each destination.

**Note:** Node numbering starts from 0.
