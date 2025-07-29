# Glacier Travel

https://codeforces.com/gym/104785/problem/g

Glaciers are vast rivers of slowly-flowing ice, fraught with crevasses which hide under thin layers of snow and wait for unsuspecting walkers to step into and fall in. To reduce the danger, hikers usually go in teams tied together with a thick rope to reduce the consequences of a fall–if one person falls in, the other person may yet hold them from a safe distance.

Today, you are roped up to cross a glacier with your partner. Your plan is to follow the exact same route, at the same speed, the first starting earlier and the second beginning to trace steps once you are exactly x metres apart. Were you to follow a completely straight path, you would thus then remain exactly x metres apart at all time.

![img](https://espresso.codeforces.com/3cbef6669d898edb5ca25001258b1899c6faf8cf.png "An illustration of the path taken in the 2nd sample case, taken from above. This could also be a particularly festive diagram of someone falling into a crevasse.")

## Input

- One line containing a real number: the separation distance along the path in metres, $s$ $(1\leq s\leq 1000)$.
- One line containing the number of points in the path, $n$ $(2\leq n\leq 10^6)$.
- $n$ further lines, the $i$th of which contains a pair of integers giving the $i$th coordinate on the track $x_iy_i$ $(−10^6\leq x,y\leq 10^6)$ in metres from the origin.

 Every pair of adjacent points on the track are distinct from one another, although the track may cross over or repeat itself. The track is guaranteed to have a length of at least $s$.

## Output

Output the minimum distance between the two walkers at any point on the route, ignoring any time after the first walker has finished, or before the second walker has started.

 The output must be accurate to an absolute or relative error of at most $10^{−4}$.

### Sample Input 1

``` text
5
4
20 0
10 0
10 10
0 10
  
```

  
### Sample Output 1

``` text
3.535533906

```

### Sample Input 2

``` text
3.16227766
9
-2 4
2 4
3 1
4 4
5 1
6 4
10 2
6 1
7 4
```

### Sample Ouput 2

``` text
0.9999999999

```
