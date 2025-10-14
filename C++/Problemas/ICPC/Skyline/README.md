# Skyline

Lucy Diamond is a young architect pursuing a Master’s degree in city development. As part of her research, she is studying how different city skylines compare. To advance with her analysis, Lucy has devised a method to estimate how the heights of buildings in a city are organized. Now she needs your assistance in writing a computer program to perform the necessary calculations.

A skyline of $N$ buildings can be represented by a sequence of $N$ building heights, denoted as $h_1, h_2,\dots , h_N$, where $N \geq 1$. For any two buildings at positions $i$ and $j$ in the skyline, with $1 \leq i < j \leq N$, Lucy defines a height disorder whenever $h_i > h_j$. Let HD represent the total number of height disorders in the entire skyline and let PHD represent the potential number of height disorders for a skyline of that size. Lucy’s measure for skyline organization is calculated as the ratio $HD/PHD$ when $N \geq 2$. In the case where $N = 1$, this measure is defined as 0, since no comparisons between building heights can be made.

As an example, consider a skyline of 4 buildings with heights 28, 30, −29, 28 (note that a negative height indicates a depression in the landscape). In this case, there are 3 height disorders, corresponding to the pairs (1, 3), (2, 3), and (2, 4). Since the potential number of height disorders for a skyline of 4 buildings is 6, Lucy’s measure for this skyline is $3/6$ .

## Input

The input consists of several test cases. A case begins with a line containing a single integer positive number N, $0 < N < 100000$, the number of buildings in the skyline. Then, a line follows with $N$ blank-separated integer numbers, representing the heights of the skyline buildings. Each height h is in the range $−20 < h < 300$. The end of input is signaled with a line containing 0.

## Output

For each test case, print one answer line with the decimal number corresponding to the value $HD/PHD$ rounded to 3 decimal places.

The output must be written to standard output.

### Sample Input

``` text
1
17
4
28 30 -29 28
0
```

### Sample Output

``` text
0.000
0.500
```

