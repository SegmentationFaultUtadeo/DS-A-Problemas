# Faktor

https://open.kattis.com/problems/faktor


The impact factor of a scientific journal is a measure reflecting the average number of citations to articles published in science journals. For this task we are using a simplified formula for calculating the impact factor:

$$
\frac{\text{Total count received by articles published in the journal} }{\text{Total number of articles published} }
$$


Rounding is always performed upwards. For example the impact factor of the "Journal for ore research and time wasting" that published 38 articles cited 894 times is $894/38 = 23.53$ rounding up to 24.

You are the editor of one scientific journal. You know how many articles you are going to publish and the owners are pushing you to reach a specific impact factor. You are wondering how many scientist you will have to bride to cite your articles to meet the owners demands. Since money is tight you want to bribe the minimal amount of scientist. Each bribed scientist buys you a single citation. 

## Input 

First and only line of input will contain 2 integers, $A (1 \leq A \leq 100)$, the number of articles you plan to publish and $I(1 \leq I \leq 100)$, the impact factor the owners require.


## Output

The first and only line of output should contain one integer, the minimal number of scientist you need to bribe.

### Sample Input 1

``` text
38 24
```

### Sample Output 1

``` text
875
```

### Sample Input 2

``` text
1 100
```

### Sample Output 2

``` text
100
```

### Sample Input 3

``` text
10 10
```

### Sample Output 3

``` text
91
```

