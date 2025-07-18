# No Casino In The Mountains

https://codeforces.com/contest/2126/problem/B

You are given an array $a$ of $n$ numbers and a number $k$. The value $a_i$ describes the weather on the $i$-th day: if it rains on the $i$-th day, then $a_i=1$; otherwise, if the weather is good on the $i$-th day, then $a_i=0$.

Jean wants to visit as many peaks as possible. One hike to a peak takes exactly $k$ days, and during each of these days, the weather must be good ($a_i=0$). That is, formally, he can start a hike on day $i$ only if all $a_j=0$ for all $j (i\leq j\leq i+k−1)$.

After each hike, before starting the next one, Jean must take a break of at least one day, meaning that on the day following a hike, he cannot go on another hike.

Find the maximum number of peaks that Jean can visit.

## Input 

Each test consists of several test cases. The first line contains a single integer $t (1\leq t\leq 104)$ — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers $n$ and $k (1\leq n\leq 105, 1\leq k\leq n)$.

The second line contains $n$ numbers $a_i$ $(a_i\in \{0,1\})$, where $a_i$ denotes the weather on the $i$-th day.  

It is guaranteed that the total value of $n$ across all test cases does not exceed 105.

## Output

For each test case, output a single integer: the maximum number of hikes that Jean can make.

### Example Input 1

``` text
5
5 1
0 1 0 0 0
7 3
0 0 0 0 0 0 0
3 1
1 1 1
4 2
0 1 0 1
6 2
0 0 1 0 0 0

```

### Example Output 1

``` text
3
2
0
0
2
```

#### Note

In the first sample:

- Day 1 - good weather, Jean goes on a hike ($a_1 = 0$).
- Day 2 - mandatory break.
- Day 3 - again good weather, Jean goes on the second hike. ($a_3 = 0$)
- Day 4 - break.
- Day 5 - good weather, third hike. ($a_5 = 0$)

Thus, Jean can make 3 hikes, alternating each with a mandatory day of rest.

In the second sample: 

- From day 1 to day 3 - three days of good weather, Jean goes on a hike. $(a_1 = a_2 = a_3 = 0)$
- Day 4 - mandatory break.
- From day 5 to day 7 - again three days of good weather, Jean goes on the second hike. $(a_5 = a_6 = a_7 = 0)$

In total, Jean makes 2 hikes. 

In the third sample: 

- There are no days with good weather ($a_i = 1$ for all $i$)

Jean cannot make any hikes. Answer: 0.
