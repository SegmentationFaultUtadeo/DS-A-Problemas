# Winnie-the-Pooh and honey

https://codeforces.com/problemset/problem/120/C

**input: input.txt**

**output: output.txt**

As we all know, Winnie-the-pooh just adores honey. Ones he and the Piglet found out that the Rabbit has recently gotten hold of an impressive amount of this sweet and healthy stnack. As you may guess, Winnie and the Piglet asked to come at the Rabiit's place. Thus, there are $n$ jars of honey lined up in front of Winnie-the-Pooh, jar number $i$ contains $a_i$ kilos of honey. Winnie-the-Pooh eats the honey like that: each time he chooses a jar containing most honey. If the jar has less that $k$ kilos of honey or if Winnie-the-Pooh has already eaten from it three times, he gives the jar to Piglet. Otherwise he eats exactly $k$ kilos of honey from the jar and puts it back. Winnie does so until he gives all jars to the Piglet. Count how much honey Piglet will overall get after Winnie staisfies his hunger. 

## Input 

The first line contains two integers $n$ and $k (1 \leq n \leq 100)$. The second line contains $n$ integers $a_1, a_2, \dots, a_n$, separated by spaces $(1 \leq a_i \leq 100)$.

## Output

Print a single number -- how many kilos of honey gets Piglet. 

### Input

``` text
3 3
15 8 10
```

### Output 

``` text
9
```




