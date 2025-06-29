# Bafana Bafana 

https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2905


Team practice is very important not only for programming contest but also for football. By team practice players can learn cooperating with team mates. For playing as a team improvement of passing skill is very important. Passing is a great way of getting the ball upfield and reduces the risk of giving the ball away. 

Carlos Alberto Parreira, the coach of Bafana Bafana, also wants his players to practice passing a lot. That's why, while in the training campo for soccer world cup 2010, every day he asks all of the players who are present in practice to stand in a circle and practice passing. If $N$ players are in practice, he gives each of the players a distinct number from 1 to $N$, and asks them to stand sequentially, so that player 2 will stand in right side of player 1 and player 3 will stand in right side of player 2, and so on. As they are in a circle, player 1 will stand right to player $N$.

The rule of passing practice is, Parreira will give the ball to player $K$, and practice will start. Practice will come to an end after $P$ passes, the player who owns the ball at that moment will give the ball back to Parreira. 

Parreira wants to be ensured that his players practice according the rule. So he wants a program which will tell him which player will give him the ball back. So after taking the ball from the same person he can be happy that, the players play according to the rules. Otherwise he will ask to start from the beginning. 

## Input 

Input starts with an integer $T$ ($T \leq 1000$), the number of test cases. Each test case will contain three integers, $N (2 \leq N \23), K (1 \leq K \leq N), P (1 \leq P \leq 200)$

## Output 

For each test case, output a single line giving the case number followed by the Bafana player number who will give the ball to Parreira. See sample output for exact format. 

### Sample Input 

``` text
3
5 2 5
6 3 5
4 1 3

```

### Sample Output

``` text
Case 1: 2
Case 2: 2
Case 3: 4
```

