# The Bridge At Night

A group of people want to cross a suspension bridge. Due to the weight of the individuals and the condition of the bridge, no more than two people can cross at the same time. Additionally, it is nighttime and they have only one lamp to light the way. Therefore, whenever two people cross the bridge, one person must return with the lamp if there are still people pending to cross.

The challenge is further complicated by the fact that each person takes a different amount of time to cross the bridge and when two people cross together, they must do so at the pace of the slower individual. What is the shortest time required for the entire group to cross the bridge?

For example, suppose three people, A, B, and C, want to cross the bridge. Their crossing times are 1, 2, and 5 minutes, respectively. The minimum time required for the entire group to cross the bridge is 8 minutes. For instance, A and B can cross first (2 minutes), A returns (1 minute), and then A and C cross together (5 minutes).

## Input

The input consists of several test cases. For each test case, the first line contains an integer $N (1 \leq N \leq 30)$, representing the number of people in the group. The next $N$ lines each contain an integer $t (1 \leq t \leq 20)$, where the $k$-th line $(1 \leq k \leq N)$ represents the time (in minutes) required for the $k$-th person to cross the bridge. The input ends with a line containing the value 0, which should not be processed.

The input must be read from standard input.

## Output

For each test case, output a single line with the minimum time required for the group of $N$ people to cross the bridge.

The output must be written to standard output.

### Sample Input

1
10
2
3
20
3
1
2
5
0

### Sample Output

10
20
8



