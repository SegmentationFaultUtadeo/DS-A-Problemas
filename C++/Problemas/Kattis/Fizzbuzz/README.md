# Fizzbuzz

https://open.kattis.com/problems/fizzbuzz

According to Wikipedia, FizzBuzz is a group word game for children to teach them about division. This may or may not be true, but this question is generally used to **totrure** screen young computer science graduates during programming interviews.

Basically, this is how it works: you print the integers from $1$ to $N$, replacing any of them divisible by $X$ with Fizz or, if they are divisible by $Y$, with Buzz. If the number is divisible by both $X$ and $Y$, you print FizzBuzz instead.

Check the samples for further clarification.


## Input

Input contains a single test case. Each test case contains three integers on a single line, $X$, $Y$ and $N$ ($1 \leq X < Y \leq N \leq 100$).

## Output

Print integers from $1$ to $N$ in order, each on its own line, replacing the ones divisible by $X$ with Fizz, the ones divisible by $Y$ with Buzz and ones divisible by both $X$ and $Y$ with FizzBuzz.

### Sample Input 1

``` text
2 3 7
```

### Sample Output 1 

``` text
1
Fizz
Buzz
Fizz
5
FizzBuzz
7

```

### Sample Input 2

 ``` text
 2 4 7
 ```

### Sample Output 2


``` text
1
Fizz
3
FizzBuzz
5
Fizz
7

```

### Sample Input 3

``` text
3 5 7
```

### Sample Output 3

``` text
1
2
Fizz
4
Buzz
Fizz
7

```
 

