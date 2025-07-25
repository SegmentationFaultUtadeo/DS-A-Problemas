# 13012 Identifying tea

https://onlinejudge.org/external/130/13012.pdf

Blind tea tasting is the skill of identifying a tea by using only your senses of smell and taste.

As part of the Ideal Challenge of Pure-Tea Consumers (ICPC), a local TV show is organized. During the show, a full teapot is prepared and five contestants are handed a cup of tea each. The participants must smell, taste and assess the sample so as to identify the tea type, which can be: (1) white tea; (2) green tea; (3) black tea; or (4) herbal tea. At the end, the answers are checked to determine the number of correct guesses.

Given the actual tea type and the answers provided, determine the number of contestants who got the correct answer.

## Input 

The input contains several test cases; each test case is formatted as follows. The first line contains an integer $T$ representing the tea type ($(1 \leq T \leq 4)$). The second line contains five integers $A, B, C, D$ and $E$, indicating the answer given by each contestant $(1 \leq A, B, C, D, E \leq 4)$.

## Output

For each test case in the input, output a line with an integer representing the number of contestants
who got the correct answer.

### Sample Input 

``` text
1
1 2 3 2 1
3
4 1 1 2 1
```

### Sample Output

``` text
2
0

```
