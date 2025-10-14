# Lumina

In the magical kingdom of Lumina, the streets are lit by luminous gems embedded in the ground. Each gem emits a radiant aura that can activate nearby gems, creating a chain reaction that illuminates all the gems. However, a powerful dark spell has extinguished all the gems in the kingdom.

The king of Lumina has tasked you with finding the most efficient way to reignite all the gems. Your goal is to determine the minimum number of gems that need to be manually activated so that, through the chain reaction, every gem becomes illuminated.

You are provided with a map of the kingdom, where each gem is represented as a point on the Cartesian plane. Each gem has a radius that indicates the distance its aura can reach to activate other nearby gems. Two gems are considered ‘‘nearby’’ if one gem lies within the radius of illumination of the other.

For example, suppose you have 3 gems with the following information:

- Gem 1: Coordinates $(X:-1, Y:0)$ with radius 4.
- Gem 2: Coordinates $(X:2, Y:1)$ with radius 2.
- Gem 3: Coordinates $(X:4, Y:-2)$ with radius 1.

In this case:

- Gem 1 has a large aura with a radius of 4, covering a significant area.
- Gem 2’s aura, with a radius of 2, can also activate nearby gems but is smaller than Gem 1’s aura.
- Gem 3 has the smallest aura, with a radius of 1, affecting only a small area.

If you manually activate Gem 1, its large aura is enough to cover Gem 2, but Gem 3 is not covered by the aura. Therefore, in this case, it is necessary to manually activate two gems.

## Input

The input consists of multiple test cases. Each test case starts with an integer $N (1 \leq N \leq 5 000)$ representing the number of gems in that test case. Then, $N$ lines follow, each containing three blank-separated integers $X, Y$, and $R$, satisfying $−10^9 \leq X, Y \leq 10^9$ and $0 \leq R \leq 10^9$, where $X$ is the x-coordinate of the gem, $Y$ is the y-coordinate of the gem, and $R$ is the radius of the gem’s aura. The input terminates with a line containing a single 0, which should not be processed

The input must be read from standard input.

## Output

For each test case, output a single line containing the minimum number of gems that need to be manually activated to ensure that, through the chain reaction, all N gems become illuminated. 

The output must be written to standard output.


### Sample Input

``` text
4
0 0 5
1 1 1
-1 -1 1
2 2 1
4
0 0 2
1 1 1
-1 -1 1
2 2 1
3
-1 0 4
2 1 2
4 -2 1
0
```

### Sample Output

``` text
1
2
2
```
