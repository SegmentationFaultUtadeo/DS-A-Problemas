# Hierarchy

https://www.acmicpc.net/problem/32534

Krešimir has started studying corporate structures, including *hierarchies*. He observed employees and their relationships within a company. In this case, we are only looking at *superior–subordinate* relationships, meaning relationships where one employee is directly superior to another employee in the company.

A hierarchy is a structure with $N$ employees and $N - 1$ superior-subordinate relationships, where there is one person who is directly or indirectly superior to all employees. In the observed company, there are also $N$ employees and $N - 1$ such relationships, but it is not certain whether this is a valid hierarchy or not.

Krešimir has asked you to help answer this question. He has recorded all the data in his notebook. In his notebook, he will make $Q$ permanent changes by reversing one superior–subordinate relationship such that the subordinate becomes superior to their former superior. After each such change, it is necessary to answer the same question: is the current state a valid hierarchy?

## Input

In the first line, there is a positive integer $N$ ($2 ≤ N ≤ 3 \cdot 10^5$).

In the next $N - 1$ lines, for each $i = 1, 2, \dots , N - 1$ a pair of integers $p_i$ and $e_i$ ($1 \leq p_i , e_i \leq N$, $p_i \ne e_i$), indicating that $p_i$ is directly superior to $e_i$.

In the next line, there is a non-negative integer $Q$ ($0 \leq Q \leq 10^6$).

In the following $Q$ There are lines, there are pairs $a_i$, $b_i$ ($1 \leq a_i , b_i \leq N$, $a_i \neq b_i$). It is guaranteed that at that moment, $a_i$ Will either be directly superior to $b_i$ or vice versa.

In the test data, it is guaranteed that it will be possible to achieve at least one hierarchy with some sequence of reversals.

## Output 

In the next $Q + 1$ lines, for each of the given scenarios, it is necessary to output whether the current structure is a hierarchy, i.e.,DA "If it is, or "NE" If it is not (without quotation marks).

## Subtasks

| **Number**  | **Point**  | **Restrictions**  |
|:-:|:-:|:-:|
| $1$  | $7$  | $N \leq 300, Q = 0$   |
| $2$  | $12$  | $N, Q \leq 300$  |
| $3$  | $16$  | $N, Q \leq 1000$  |
| $4$  | $15$  | $Q = 0$  |
| $5$  | $23$  | For each $i = 1, 2, \dots, N-1$ it will hold that $i$ is superior to $i +1$ or vice versa  |
| $6$  | $17$  | No additional constraints  |



### Sample Input 1

``` text
3
1 2
1 3
3
1 2
1 2
1 3

```

### Sample Output 1

``` text
DA
DA
DA
DA

```

### Sample Input 2

``` text
4
2 1
2 3
1 4
4
4 1
4 1
3 2
1 4

```

### Sample Output 2

``` text
DA
NE
DA
DA
NE

```
