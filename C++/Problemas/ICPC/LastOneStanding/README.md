# Last One Standing

https://codeforces.com/gym/104785/problem/L

In a computer game units are described by their health $h$, damage $d$, and time to reload $t$.

When such a unit fires a missile at an opposing one — the opponent's health is decreased by $d$ $0.5$ seconds after the missile is fired. The time between consecutive missile launches for the same unit should be at least $t$ seconds.

For simplicity, we assume the missile supply to be infinite for all units in the game.

Two players — one controlling a unit with health $h_1$, damage $d_1$ and time to reload $t_1$, and the second with a unit described by $h_2$, $d_2$ and $t_2$ — have engaged in a fight in this computer game. Both units are fully reloaded at the beginning of the fight and can fire missiles immediately.

The unit is destroyed when its health becomes zero or negative. A player wins if there is a moment in time such that the opponent's unit is destroyed, while theirs is not.

Since it takes 0.5 seconds for a missile to reach its target, it is possible for both units to fire missiles at the same time and ultimately destroy each other.

You are to determine who wins in case both players act optimally.

## Input 

- One line containing the integer numbers $h_1$, $d_1$ and $t_1$ ($1\leq h_1$ ,$d_1$ ,$t_1\leq 1000$).
- One line containing the integer numbers $h_2$, $d_2$ and $t_2$ ($1\leq h_2$ ,$d_2$,$t_2\leq 1000$).

## Output

Output the phrase `player one` if the first player wins, `player two` if the second player wins, or `draw` if neither player wins.

### Sample Input 1

``` text
30 10 10
30 15 19

```

### Sample Output 1

``` text
player two

```

### Sample Input 2

``` text
30 15 19
30 10 10

```

### Sample Output 2

``` text
player one
```

### Sample Input 3

``` text
100 20 10
100 12 5

```

### Sample Output 3

``` text
draw
```

