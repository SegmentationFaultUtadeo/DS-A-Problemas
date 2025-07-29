# Mini-Tetris 3023

https://codeforces.com/gym/104785/problem/M

A guy named Gry found a new game called "Mini-Tetris 3023". This small version of Tetris is played on a very long grid only 2 cells high and has just three types of tile:

- A `square` made out of $4$ tiles in a $2\times 2$ grid.
- An `S-tile` made out of $4$ tiles, $2$ on one row and $2$ slightly offset on the other.
- A `corner` made out of $3$ tiles, $1$ on one row and $2$ on the other.  

Tiles may be rotated $0$, $90$, $180$, or $270$ degrees to fit amongst each other, however, they cannot overlap or go outside the vertical boundary of the grid.

![img](https://espresso.codeforces.com/83f14be8b22a6980e3e9f1e66f9a83d5ea26e8e9.png)

This game provides $a$ squares, $b$ S-tiles, and $c$ corners. Gry would like to beat the high score by creating the largest-possible contiguous $2\times n$ rectangle out of some or all of the provided tiles, without any tiles overlapping or sticking out of the rectangle.

## Input 

- The sole line of input contains three integers $a$, $b$, and $c$ ($0\leq a,b,c\leq 50$) — the number of squares, S-tiles, and corners, respectively.

## Output 

Output the maximum possible width of the grid, $n$, that can be perfectly filled by some or all of the given tiles without overlapping or overstepping the boundaries.

### Sample Input 1

``` text
2 2 2
```

### Sample Output 1

``` text
11
```

