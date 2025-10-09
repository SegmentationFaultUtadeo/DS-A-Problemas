# Drug Test

Active Customizable International Surveys (ACIS) is a company specialized in surveys to determine drug impact and efficacy. They have designed an experiment to test $X$, a new drug to be used worldwide. The experiment is based on the classical technique of using different concentrations of the drug to measure and compare its effects on test individuals.

Packages of $k \geq 0$ pills, called $k$-packages, are used to define different concentrations of the drug. Each $k$-package is either filled with pills that contain the active ingredient of $X$ (called active package) or filled with placebo pills without $X$’s active ingredient (called placebo package). A package without pills (i.e., a 0-package) is called empty and is considered a placebo package.

Experiments consider a maximum number of pills per package $N$ and are designed with two conditions:

- c1 Each test individual must receive exactly two packages, an active one and a placebo one; if their corresponding sizes are $a$ and $p$, then $a + p$ must be a power of 2.
- c2 For each size $k, 0 \leq k \leq N$, at least one individual must receive a $k$-package.

Your task is to determine if a given package size corresponds to an active or to a placebo package. Indeed, ACIS researchers have proved that there is only one way to design the experiment fulfilling the given conditions.

Consider a scenario with $N = 12$, where packages 1, 2, 4, 5, 8, 9, 10 are active and packages 0, 3, 6, 7, 11, 12 are placebo. The experiment may be accomplished by the following pairs of packages (active, placebo):

$$
(1, 0), (1, 3), (1, 7), (2, 0), (2, 6), (4, 0), (4, 12), (5, 3), (5, 11), (8, 0), (9, 7), (10, 6).
$$

Note that every pair $(a, p)$ in the list is such that $a$ is an active package, $p$ is a placebo package, and $a + p$ is a power of 2. On the other hand, every number from 0 to 12, inclusive, appears in one pair at least. Hence, if the queries are for packages of sizes 1, 3, 5, 7, 9, the answer is active for 1, 5, 9 and placebo for 3, 7.

## Input

The input consists of several test cases. Each case is defined by two lines. The first line contains two blank- separated integers $N$ and $Q$, $(0 < N < 10 000$ and $0 < Q \leq 100)$, the maximum number of pills per package and the number of queries, respectively. The second line contains $Q$ non-negative integer numbers $q_1, q_2, \dots , q_Q$, $(0 \leq q_k \leq N$ and $0 < k \leq Q)$. The input ends with a line containing two blank-separated 0 values.

The input must be read from standard input.

## Output

For each test case, output one line with a string $a_1, a_2, \dots, a_Q$ (without blanks between characters), where $a_k$ is A if $q_k$ corresponds to the size of an active package and P if $q_k$ corresponds to the size of a placebo package.

The output must be written to standard output.

### Sample Input

4 3
0 4 2
12 5
1 3 5 7 9
0 0

### Sample Output

PAA
APAPA


