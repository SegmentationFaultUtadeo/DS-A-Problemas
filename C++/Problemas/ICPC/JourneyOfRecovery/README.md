# Journey of Recovery

https://codeforces.com/gym/104785/problem/j

You are making an international trip with several stops to blow off steam and celebrate your progression onto the NWERC. Since your flights are often booked with low-cost airlines, you always run the risk of your flights being cancelled last minute leaving you stuck in the airport. Normally this is no problem—take the next flight—but you have to arrive at the NWERC on time.

If any one of your flights is cancelled at the same moment you are about to depart, and all others operate as planned, you will book a new itinerary from there to your final destination. Assuming you always plot the fastest route, by how much will you be delayed in the worst case?

## Input

- One line containing the number of flight connections overall, $n$ $(1\leq n\leq 10^6)$.
- $n$ further lines, the $i$th of which contains four space-separated fields:
  - The code of the departure airport, $s_i$ ($1\leq | s |\leq 20$)
  - The time of departure in days, minutes, and hours, in the format `ddhh:mm` ($1\leq d\leq 365, 0\leq hh\leq 23, 0\leq mm\leq 59$).
- One line containing the number of flight connections in your itinerary, $m$ ($1\leq m\leq n$).
- One line containing the $m$ indices $f_1, \dots, f_m$ of flight connections, in the order you plan to take them.

Flights always go between different airports and always strictly forward in time. For every consecutive pair $u$, $v$ in your itinerary, the arrival time of flight $u$ is guaranteed to be less than or equal to the departure time of flight $v$.

Transfers are instantaneous—that is to say, arriving at an airport and departing from it in the same minute is possible. Likewise, if one planned flight is cancelled, you may board another departing at exactly the same time.

## Output

Output the maximum amount by which you could be delayed if any one of the given flights is cancelled at its moment of boarding. If you would not be delayed at all in any case (or can even arrive early) simply output $0$.

If you cannot always make it to the destination at all, output `stranded` instead.

### Sample Input 1

``` text
8
egnx 0d00:10 delft 0d01:00
delft 0d01:00 zad 0d09:00
zad 0d09:01 prg 0d15:30
prg 0d20:00 delft 1d02:15
prg 0d22:00 delft 1d04:15
zad 2d00:00 delft 3d00:00
egnx 2d00:00 delft 2d02:00
egnx 2d00:00 delft 2d02:00
4
1 2 3 4

```

### Sample Output 1

``` text
2745

```

### Sample Input 2

``` text
3
ork 101d00:00 noc 101d00:01
ork 100d23:59 noc 101d00:02
dub 100d00:00 ork 101d00:00
2
3 1

```

### Sample Output 2

``` text
stranded
```

### Sample Input 3

``` text
2
lax 0d00:30 hnl 0d06:20
lax 0d00:30 hnl 0d06:20
1
2

```

### Sample Output 3

``` text
0
```

