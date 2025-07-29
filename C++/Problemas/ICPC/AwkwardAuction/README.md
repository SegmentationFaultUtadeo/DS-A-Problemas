# Awkward Auction

https://www.acmicpc.net/problem/32537

Your local warehouse’s marketing department has thought of a new way of extracting money from their consumers: organizing the Battle in Assessing Precisely Costs (BAPC).

A battle is played against an auctioneer. The auctioneer has an unlimited number of identical gems available, which all have the same fixed secret worth. This secret worth is an integer between 1 and n (inclusive, in euros). In each round, you have to bid an integer amount of euros on such a gem, and your goal is to bid exactly the secret worth. If you bid at least the secret worth, you have to buy the gem for the amount of your bid. On the other hand, if you bid less than the secret worth, you do not get the gem and keep your bid. However, if you bid less than the worth, the auctioneer will give an endless speech why the gem is clearly worth more than the bid. To stop this speech and be able to make a new bid, you have to bribe the auctioneer with b euros each time. Finally, if you bid exactly the secret worth, then in addition to buying the gem, you get a nice cup showing that you won the battle, and the battle immediately ends.

Since the BAPC is your favourite competition, you of course want this cup! Therefore, you keep bidding
until you bid the right amount and get the cup. You wonder how much this will cost you in the worst
case, assuming that you make optimal decisions for the amounts to bid.

## Input

The input consists of:

- One line with two integers $n$ and $b$ ($1 \leq n \leq 400$, $1 \leq b \leq 10 000$), the given maximum worth of the gem and the bribe you need to pay when bidding too low.

## Output

Output the maximum cost in euros that you have to pay in the worst case if you bid optimally.

### Sample Input 1

``` text
4 2
```

### Sample Output 1

``` text
6
```

### Sample Input 2

``` text
8 3
```

### Sample Output 2

``` text
16
```


