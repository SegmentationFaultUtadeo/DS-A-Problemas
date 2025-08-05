# Baby Bites

https://open.kattis.com/problems/babybites

Arild just turned $1$ year old, and is currently learning how to count. His favorite thing to count is how many mouthfuls he has in a meal: every time he gets a bite, he will count it by saying the number out loud.

Unfortunately, talking while having a mouthful sometimes causes Arild to mumble incomprehensibly, making it hard to know how far he has counted. Sometimes you even suspect he loses his count! You decide to write a program to determine whether Arild’s counting makes sense or not.

## Input

The first line of input contains an integer $n(1\leq n \leq 1000)$, the number of bites Arild receives. Then second line contains $n$ space-separated words spoken by Arild, the $i$’th of which is either a non-negative integer $a_i(0\leq a_i \leq 10000)$ or the string `“mumble”`.

## Output

If Arild’s counting might make sense, print the string `“makes sense”`. Otherwise, print the string `“something is fishy”`.

### Sample Input 1

``` text
5
1 2 3 mumble 5
```

### Sample Output 1

``` text
makes sense
```

### Sample Input 2

``` text
8
1 2 3 mumble mumble 7 mumble 8
```

### Sample Output 2

``` text
something is fishy
```

### Sample Input 3

``` text
3
mumble mumble mumble
```

### Sample Output 3

``` text
makes sense
```
 
