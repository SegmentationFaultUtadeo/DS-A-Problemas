# Delivery Forces

https://codeforces.com/problemset/gymProblem/104785/D

Gry finally becomes the Executive Courier Officer in "Universe Express". He has $n$ subordinate couriers with some delivery strength $f_i$. The delivery strength of a team of three people is the median of their strength, i.e., the middle element after the sorting. Please help Gry to split the couriers into $k$ teams of three people in order to maximize the total delivery strength of "Universe Express". The total strength is the sum of the strength of these $k$ teams.

## Input 

- One line containing the number of couriers in the company, $n (1\leq n\leq 10^6)$, where $n$ is a multiple of $3$.
- One line containing the strengths of the $n$ couriers $f_1...f_n$ $ (1\leq f\leq 10^6)$.

## Output

The sole line of the output should contain the maximal strength of "Universe Express".

### Sample Input 1

``` text
3
1 2 3
  
```

### Sample Output 1

``` text
2
```

### Sample Input 2

``` text
6
5 6 2 3 1 4

```

### Sample Output 2

``` text
8
```
  
