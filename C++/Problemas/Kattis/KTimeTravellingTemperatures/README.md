# Time Travelling Temperatures 

https://open.kattis.com/problems/temperature

Hello from the future. I am a time traveller. You would think that in the future we have agreed to use a single scale for measuring temperature. This is not so. In fact, we have all sorts of scales now. All the big brands have made their own. This is a bit confusing. Please help me figure it out. In my day to day work I have to relate to two different scales $A$ and $B$. Help me find a temperature where the two scales are the same, so I don't have to worry about it. 


## Input 

Input consists of two space-separated integers, $X$ and $Y$. $X$ is the point on $B$ where $A$ is zero. $Y$ is the number of degrees in $B$ that equal a change of a single degree in $A$. 

## Output 

Output the temperature where both scales are the same. This number must have an absolute or relative error of at most $10^{-6}$. If no such temperature exists, output "IMPOSSIBLE" (without the quotes) instead. If more than one such point exists, output "ALL GOOD" (without the quotes) instead. 


## Limits


- $-100 \leq X \leq 100$
- $1 \leq Y \leq 100$


### Sample Input 1

``` text
32 2 
```

### Sample Output 1

``` text
-32 
```

### Sample Input 2

``` text
1 3
```

### Sample Output 2

``` text
-0.500000000 
```
