# Only One Digit

https://codeforces.com/contest/2126/problem/A

You are given an integer $x$. You need to find the smallest non-negative integer $y$ such that the numbers $x$ and $y$ share at least one common digit. In other words, there must exist a decimal digit $d$ that appears in both the representation of the number $x$ and the number $y$.

## Input 

The first line contains an integer $t (1\leq t \leq 1000)$ — the number of test cases.

The first line of each test case contains one integer $x (1\leq x\leq 1000)$.

## Output

For each test case, output one integer $y$ — the minimum non-negative number that satisfies the condition.

### Example Input 1

``` text
5
6
96
78
122
696

```

### Example Output 1

``` text
6
6
7
1
6

```

### Note

In the first test case, the numbers $6$ and $6$ share the common digit `'6'`. Moreover, there is no natural number smaller than this that shares a common digit.

In the second test case, the numbers $6$ and $96$ share the common digit `'6'`.

