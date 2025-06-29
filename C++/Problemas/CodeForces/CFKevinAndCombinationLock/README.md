# A. Kevin and Combination Lock

https://codeforces.com/problemset/problem/2048/A?locale=en


Kevin is trapped in Lakeside Village by Grace. At the exit of the village, there is a combination lock that can only be unlocked it Kevin solves it. 

The combination lock starts with an integer $x$. Kevin can perform one of the following two operations zero or more times: 

1. If $x\neq 33$, he can select two consecutive digits $3$ from $x$ and remove them simultaneously. For example, if $x = 13 323$, he can remove the second and third $3$, changing $x$ to $123$. 
2. If $x \geq 33$, he can change to $x$ to $x-33$. For example, if $x = 99$, he can choose this operation to change $$ to $99-33 = 66$.

When the value of $x$ on the combination lock becomes 0, Kevin can unlock and escape from Lakeside Village. Please determine whether it is possible for Kevin to unlock the combination lock and escape. 

## Input 

Each test contains multiple test cases. The first line contains the number of test cases $t$ $(1 \leq t \leq 10^4)$. 

The only line of each test case contains a positive integer $x(1 \leq x \leq 10^9)$. 

## Output

For each test case, output "YES" or "NO" (without quotes) in one line, representing whether Kevin can unlock the combination lock and escape. You can output the answer in any case (upper or lower). For example, the string "yEs", "yes", "Yes", and "YES" will be recognized as positive responses:


### Input 

``` text
5
165
6469
666
114514
133333332
```

### Output 

``` text
YES
YES
NO
NO
YES
```


#### Note

For the first test case,


$$165 \xrightarrow[-33] \ 132 \xrightarrow[-33] \ 99 \xrightarrow[-33]\ 66  \xrightarrow[-33]\ 33  \xrightarrow[-33]\ 0 $$


For the second test case,

$$6369 \xrightarrow[-33] \ 6336 \xrightarrow[\text{remove 33}] \ 66 \xrightarrow[-33]\ 33  \xrightarrow[-33]\ 0 $$ 
