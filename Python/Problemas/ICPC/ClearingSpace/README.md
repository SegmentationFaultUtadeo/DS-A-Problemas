# Clearing Space

https://codeforces.com/problemset/gymProblem/104785/c

You are putting up an event space in Nottingham's Sherwood Forest by erecting a fence in a circular-shaped clearing you found that is exactly one kilometre in radius. You will put some fence posts in the trees around the edge of the clearing and then connect them together with fencing later.

You would like to put the fence around as much of the event space as possible. However, the ground is only suitable in a few places around the border, and you only have so many fence posts to put in the ground, so you'll have to choose carefully if you want to maximise area.

![img](https://espresso.codeforces.com/a3bbece651ef07b0703e32ff80784d088d37f14e.png)

An illustration of using 4 posts to capture the maximum area in sample input 1.

Knowing the safe places to put fence posts, and the number of posts you have, what is the maximum area of clearing you can enclose?

## Input 

- One line containing the integer number of safe points around the 1km-radius clearing, $n (3\leq n\leq 100)$.
- One line containing the integer number of fence posts you have, $p (3\leq p\leq n)$.
- One line containing $n$ distinct real numbers $a_1,\dots ,a_n$ in ascending order, the angles in degrees of each of the safe places to add fence posts $(0\leq a_i\leq 360)$.

## Output

Output the maximum area you can capture with a polygonal clearing made using at most p fence posts, in square metres.

The output must be accurate to an absolute or relative error of $10^{-6}$.

As a reminder, the radius of the clearing is 1km.

### Sample Input 1

 ``` text
 5
4
0 120 180 240 270

 ```

### Sample Output 1

``` text
1866025.403784438735

```

 
