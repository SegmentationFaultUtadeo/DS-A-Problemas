# Quality-Adjusted Life-Year

https://open.kattis.com/problems/qaly


The Quality-Adjusted Life-Year (QALY) is a way to measure a person's quality of life that includes both the quality and the quantity of life lived. 

The quality of life lived can be quantified as a number between $0$ and $1$. If someone is living with perfect health, the quality of life is $1$. If someone is dead, then the quality of life is $0$. The quality of life may increase or decrease due to medical treatments, sickness, etc. 

The QALY for each period in which the quality of life is constant is simply the product of the quality of life and the length of th eperiod (in years). We wish to know the amount of QALY accumulated by a person at the time of death, given the complete history of this person. 


## Input 

The first line if input contains a single integer $N \ (1 \leq N \leq 100)$, which is the number of periods of constant quality of life during the person's lifetime. 

The next $N$ lines describe the periods of life. Each of these lines contains two real numbers $q (0 \leq q \leq 1) $, and $y (0 \leq y \leq 100)$ which is the number of years in this period. All real numbers will be specified to exactly one decimal place. 

## Output 

Display the QALY accumulated by the person. Your answer will be considered correct if its absolute error does not exceed $10^{-3}$.

### Sample Input 1

``` text
5
1.0 12.0
0.7 5.2
0.9 10.7
0.5 20.4
0.2 30.0
```

### Sample Output 1 

``` text
41.470
```
