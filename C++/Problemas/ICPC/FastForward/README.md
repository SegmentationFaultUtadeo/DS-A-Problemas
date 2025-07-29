# Fast Forward

https://codeforces.com/gym/104785/problem/F

Gry has started to use the new Expify song streaming platform. Since, Gry does not want to spend money Expify forces him to listen to advertisements. An advertisement can be played only after some song (it cannot be played in the middle) and only if the time from the end of the previous advertisement is at least $c$ seconds.

Gry has a circular playlist with $n$ songs where the duration of the $i$-th song is $d_i$ seconds. He wants to minimize the number of advertisements, so, he wants to find out how many advertisements will be if he starts listening to his whole playlist from $i$-th song, i.e., the circular playlist stops playing after $n$ songs.

We suppose that there is an advertisement right before Gry starts listening. Neither this advertisement nor the one, after the playlist stops, count.

## Input

- One line containing the number of songs in the playlist $n$, and the refresh time between advertisements $c$ $(1\leq n\leq 10^6, \ 1\leq c\leq 10^9)$ 
- One line containing the $n$ durations of the songs $d_1, \dots, d_n$ $(1\leq d_i\leq 10^3)$

## Output

Output the number of advertisements if Gry starts listening to the playlist from the $i$-th song.

### Sample Input 1

 ``` text
 7 7
1 1 1 1 1 1 1

 ```

### Sample Output 1

``` text
0 0 0 0 0 0 0 
```

### Sample Input 2

``` text
3 3
1 1 3

```

### Sample Output 2

``` text
0 1 1
```

 
