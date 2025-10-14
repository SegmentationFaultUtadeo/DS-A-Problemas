# Only1s0s

Alana is a very curious number theory researcher. Last week, she discovered a --perhaps-- useless property about positive integers: for every such number $N$, there exists an integer $M$, a multiple of $N$, that consists only of the digits 1 and 0 in decimal notation. This number $M$ is called an only1s0s number.

For instance:

- If $N = 4$, then $M = 10000$ and $M/N = 2500$
- If $N = 14$, then $M = 10010$ and $M/N = 715$


Alana has proven that there are many possible solutions for any N. However, she is interested only in the smallest possible M for a given N. Moreover, she wants to determine the value D such that $M = N \cdot D$, where M is the minimum only1s0s number.

Can you help her?

## Input

The input consists of several test cases. Each test case is defined by one line containing a positive integer $N (0 < N < 10^5)$. The input ends with a line containing 0.

The input must be read from standard input.


## Output

For each test case, output a single line containing the positive integer D, such that $N \cdot D$ is the smallest only1s0s number that is a multiple of N.

The output must be written to standard output.

### Sample Input

``` text
4
14
13
0
```

### Sample Output

``` text
25
715
77
```

