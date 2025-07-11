# Statistics 

https://open.kattis.com/problems/statistics

Research often involves dealing with large quantities of data, and those data are often too massive to examine manually. Statistical
descriptions of data can help humans understand their basic properties. Consider a sample of $n$ numbers $X=(x_1,x_2,\ldots ,x_
n)$. Of many statistics that can be computed on $X$, some of the most important are the following:

- $\min (X)$: the smallest value in $X$
- 
- $\max (X)$: the largest value in $X$
- 
- $\mbox{range}(X)$: $\max (X) - \min (X)$

Write a program that will analyze samples of data and report these values for each sample.

## Input

The input contains between $1$ and $10$ test cases. Each test case is described by one line of input, which begins with an integer $1 \leq n \leq 30$ and is followed by $n$ integers which make up the sample to be analyzed. Each value in the sample will be in the range $-1\, 000\, 000$ to $1\, 000\, 000$. Input ends at the end of file.

## Output

For each case, display Case X:, where X is the case number, followed by the min, max, and range of the sample (in that order). Follow the format of the sample output.

### Sample Input 1

``` text
2 4 10
9 2 5 6 4 5 9 2 1 4
7 6 10 1 2 5 10 9
1 9

```

### Sample Output 1

``` text
Case 1: 4 10 6
Case 2: 1 9 8
Case 3: 1 10 9
Case 4: 9 9 0

```



