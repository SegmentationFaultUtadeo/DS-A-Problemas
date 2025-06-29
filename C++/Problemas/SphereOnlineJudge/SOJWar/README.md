# TAP2013G - War

https://www.spoj.com/problems/TAP2013G/en/

War, an event worthy only of appearance in literature, movies or perhaps programming contests, has reached the Nlognian empire, which is facing the neighboring empire of Quadradonia. 

War protocols agreed upon by both parties indicate that the war will be waged in successive battles, in each of which a different soldier from each empire will face one another, so that each soldier will take part in exactly one battle. The empire that wins more battles will then win the war. 

Each empire has an army formed by $S$ soldiers, and each soldier has a certain combat skill. In each battle between two soldiers, the one with greatest combat skill wins the battle. If both soldiers have the same combat skills, the battle is declared a draw and technically no side claims victory. The spies of Nlognia have intercepted secret information concerning the combat skill of each soldier of Quadradonia's army, so Nlognia's queen requires your assistance in order to calculate the maximum number of battles that can be won during the war if her soldiers are sent in the appropiate order. 

## Input 

The first line contains an integer number $S$ representing the number of soldiers in each army $(1 \leq S \leq 10^5)$. The second line contains $S$ integer numbers $Q_i$ representing the combat skills of the different soldiers of Quadradonia's army, in the order in which the battles shall take place ($1 \leq Q_i \leq 10^9$ for $i = 1, \dots, S$). The third line contains $S$ integer numbers $N_i$ representing the combat skills of the different soldiers in Nlognia's army, in an arbitrary order ($1 \leq N_i \leq 10^9$ for $i = 1, \dots S$). 

## Output 

Print a line containing a single integer number representing the maximum number of battles that Nlognia can win during the war. j

### Input 1

``` text
3
2 1 1000000000
1 1 2
```

### Output 1

``` text
1
```

### Input 2

``` text
4
6 3 1 4
2 7 4 3
```

### Output 2

``` text
3
```

