# 12917 Prop hunt!

https://onlinejudge.org/external/129/12917.pdf

Prop hunt is a game modification (or simply a mod), similar
to the famous hide and seek, where two teams play against
each other. One team are the props, they are players that
can choose any object of the scenario to disguise themselves
as, so they could be a table, a book, a barrel, a paper,
whatever they want. They must be completely calm or
the other team, the hunters, will kill them. As a hunter,
you must be careful: if you shoot something that is not a
disguised player, you start losing life. At the end, if any
prop survives they will win, otherwise the hunters will win.

Your mission is to determine who is going to be the winner of the game, but thankfully, with a
couple of simplifications. You will get three numbers: $P$ - he quantity of players in the props team, $H$ - the number of hunters and $O$ - he objects to disguise as. Assume that all the hunters are bots
(that is, controlled by the computer) and they’re pretty bad: the hunters will shoot everything in the
scenario, starting by the less suspicious objects and ending with the disguised players. If every hunter
has 1 point of life, what team will win?

## Input 

The input consists of several test cases, each one on a single line that contains 3 integers $P (1 \leq P \leq 5), \ H(1 \leq H \leq 5 ), \ O(1 \leq P \leq O \leq 10)$.

## Output


Print on a single line the text `‘Props win!’` if the props survive, otherwise print `‘Hunters win!’`.

**Explanation:** On the first case, there are 2 props and 2 hunters, but 3 objects to disguise as. The
first hunter dies trying to kill the object that is not a player, but the second hunter shoots to the other
objects that are the disguised players.

In the second case, the first hunter shoots a non-player object, and the second one does the same,
so the props survive.

### Sample Input 

``` text
2 2 3
2 2 4
```

### Sample Output

``` text
Hunters win!
Props win!

```

