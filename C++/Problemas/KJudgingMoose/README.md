# Judging Moose 

https://open.kattis.com/problems/judgingmoose

When determining the age of a bull moose, the number of tines (sharp points), extending from the main antlers, can be used. An older bull moose tends to have more tines than a younger moose. However, just counting the number of tines can be misleading, as a moose can break off the tines, for example when fighting with other moose. Therefore, a point system is used when describing the antlers of a bull moose. 

The point system works like this: If the number of tines on the left side and the right side match, the moose is said to have the even sum of the number of point. So, "an even 6-point moose", would have three tines on each side. If the moose has a different number of tines on the left and right side, the mooose is said to have twice the highest number of tines, but it is odd. So "an odd 10-point moose" would have 5 times on one side, and 4 or less times on the other side. 

Can you figure out how many points a moose has, given the number of tines on the left and right side?

## Input

The input contains a single line with two integers $l$ and $r$, where $0 \leq l \leq 20$ is the number of tines on the left, and $0 \leq r \leq 20$ is the number of tines on the right side. 

## Output 

Output a single line describing the moose. for even pointed moose, output "Even $x$" where $x$ is the points of the moose. For odd pointed moose, output "Odd $x$" where $x$ is the points of the moose. If the moose has no
tines, output "Not a moose".


### Sample Input 1

``` text
2 3
```

### Sample Output 1

``` text
Odd 6
```

### Sample Input 2

``` text
3 3
```

### Sample Output 2 

``` text
Even 6
```

### Sample Input 3

``` text
0 0
```

### Sample Output 3

``` text
Not a moose
```

