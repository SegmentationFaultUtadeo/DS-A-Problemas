# Boat Commuter

https://codeforces.com/problemset/gymProblem/104785/B?mobile=true

The Bulgarian city of Nodnol runs a boat service to ferry its residents between the trendy areas in which they live and the large metallic structures in which they work on the next recession.

TFN (Transport For Nodnol) has issued $m$ travel cards (known affectionally as "Retsyo"), which are numbered from 1 to $m$. Each pier has a card terminal at which passengers are required to tap "in" when starting the trip and to tap "out" when finishing it.

As there is only one card terminal on each pier, passengers use the same device to tap in and to tap out.

Trip cost depends on the distance travelled and is determined as follows: 

- if the trip started at the pier $i$ and finished at the pier $j (i \neq j)$, then its cost is $|i−j|$ pounds;
- if the trip started somewhere and was not finished with a tap out, then it costs £100; 
- if the trip started and finished in the same place, then it also costs £100, as it is interpreted as an attempt to game the system. 

You are given a sequence of tapping events — for each you have the pier $p_i$ and card number $c_i$ recorded. You are to determine how much the transport authority should charge each of the cards 

## Input 

- One line containing three integer numbers: the number of piers $n$, the number of travel cards $m$, and the number of events $k$ ($2 \leq n \leq 50, 1 \leq m, k \leq 10^5$)
- $k$ further lines, each describing tap events in chronological order.
  - The $i$-th event is described by two integers $p_i$ and $c_i$ ($1\leq p_i\leq n, 1\leq c_i\leq m$).

## Output 

Output $m$ integers separated by spaces — the $i$-th integer giving the total charge to be applied to the $i$-th card. 

### Sample Input 1

``` text
3 3 5
1 1
1 2
1 2
3 1
2 3

```

### Sample Output 1

``` text
2 100 100

```


