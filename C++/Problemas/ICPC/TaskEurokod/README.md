# Task Eurokod

https://hsin.hr/coci/archive/2023_2024/

https://hsin.hr/coci/archive/2023_2024/contest3_tasks.pdf


This year, for the first time, the Eurokod is being held, an international competition in writing beautiful and readable code!

There are $n$ contestants participating in the competition, labeled with numbers from 1 to $n$, and each of them has written a code.

Their codes are evaluated by an association of computer scientists. The association consists of a president and members of the association. The president awards points to codes in one way, and the members of the association award points in another way.

**President's points:**

The president will rank the codes from the most beautiful to the least beautiful (in his opinion). The first code will be awarded $n$ points, and each subsequent code will be awarded one point less than the previous one.

**Members of the association’s points:**

Each member of the association will vote for the code he considers the most beautiful. After each member of the association has voted, the codes will be ranked in descending order according to the number of votes they received from the members of the association. The first code (the one with the most votes) will be awarded $n$ points, and each subsequent code will be awarded one point less than the previous one.

**Total points:**

The total number of points for each code is equal to the sum of the points awarded by the president and the number of points awarded by the members of the association.

Your task is to print the order of codes in descending order according to the number of points.

If more codes have the same number of points, then the better ranked one is the one that has won more
points from the members of the association.

## Input 

The first line contains an integer $n (1\leq n \leq 50)$, the number of contestants.

The second line contains $n$ integers $a_i$ $(1 \leq a_i \leq n)$, where the $i$-th integer represents the label of the code that the president ranked $i$-th. The ranking of the president is given in the order from the most beautiful to the least beautiful, it contains all the labels from 1 to $n$ exactly once.

The third line contains $n$ integers $b_i$ $(0 \leq b_i \leq 200)$, where the $i$-th integer represents the number of votes that the $i$-th code received from the members of the association. There won’t be two codes that received the same number of votes.

## Output

In $n$ lines, print the ranking of codes in descending order according to the number of points.

Each line should be in the form `"[rank]. Kod[label] ([number of points])"`, where `[rank]` is the rank of the code in the ranking, `[label]` is the label of the code written in two-digit form with leading zeros, and `[number of points]` is the number of points that the code won.

For example, if the first place was won by the code with the label 3 with 12 points, then the first line is
`"1. Kod03 (12)"`.


### Sample Input 1

``` text
3
1 2 3
50 10 20
```

### Sample Output 1

``` text
1. Kod01 (6)
2. Kod03 (3)
3. Kod02 (3)
```

### Sample Input 2

``` text
5
5 2 4 1 3
4 5 2 1 3
```

### Sample Output 2

``` text
1. Kod02 (9)
2. Kod05 (8)
3. Kod01 (6)
4. Kod04 (4)
5. Kod03 (3)
```

### Sample Input 3

``` text
7
6 3 2 1 5 4 7
200 56 11 0 13 105 12
```

### Sample Output 3

``` text
1. Kod06 (13)
2. Kod01 (11)
3. Kod02 (10)
4. Kod03 (8)
5. Kod05 (7)
6. Kod07 (4)
7. Kod04 (3)
```

#### Clarification of the first example:

`Kod03` and `Kod02` have the same number of points, but `Kod03` has more votes from the members of the
association, so it is better ranked.

#### Clarification of the second example:

The president ranked the `Kod05` as the most beautiful, so it won $n = 5$ points.




