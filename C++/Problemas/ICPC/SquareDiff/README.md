# Square Diff

Taking a break from her advanced number theory research, Alana began playing with square differences:

- $1^2 - 0^2 = 1$
- $6^2 - 4^2 = 20$
- $10^2 - 5^2 = 75$

However, she has not found two integers $x$ and $y$ such that $x^2 − y^2 = 2$. It might be the case that such a pair does not exist. This made her wonder if there are other numbers that are equally rare.

Alana wants to determine whether a given integer can be expressed as the difference of two squares of integers. Can you help her by writing a program to solve this problem?

## Input

The input consists of several test cases. Each test case is defined by a single line containing a positive integer $N (0 < N < 40 000)$, which is the number to test. The input ends with a line containing 0, which should not be processed.

The input must be read from standard input.

## Output

For each test case, print a single line with one character: ‘Y’ if $N$ can be expressed as the difference of two squares of integers and ‘N’ otherwise.

The output must be written to standard output.

### Sample Input

1
2
3
20
0

### Sample Output

Y
N
Y
Y

