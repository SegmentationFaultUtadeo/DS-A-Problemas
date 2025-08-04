# 13130 Cacho

In Bolivia there is a very popular game called “Cacho”. The game consists rolling five dices $(a1, a2, a3, a4, a5)$ and then annotate the result according to certain rules. This time we will focus on one case in particular: “escala”. A “escala” is the scene in which the dices form a sequence of consecutive numbers. More formally a 
“escala” meets the property:

$$
a_{i} + 1 = a_{i+1}, \quad 1\leq i \leq 4
$$

There are two types of “escala”: a ordinary “escala” (it satisfy the property described above), and a “Escala Real” (when the scenery is 1, 3, 4, 5, 6. In the game this case is also a valid “scala”).

Cael is a boy who is learning to play and wants you to help develop a program to check when five dices are forming a “escala”. Note that the “Escala Real” is not a valid “escala” for Cael.

## Input

The input begins with a number $T \leq 100$, the number of test cases. Below are $T$ lines, each with five numbers $a_i$ $(1 \leq a_i \leq 6)$ in no-decreasing order.

## Output

In each case, if the five dices form a scale print in one line `‘Y’`. Otherwise print in one line `‘N’` (quotes for clarity).

### Sample Input

``` text
5
1 2 3 4 5
2 3 4 5 6
1 4 4 4 5
1 3 4 5 6
1 2 2 3 6
```

### Sample Output

``` text
Y
Y
N
N
N

```

