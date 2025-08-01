# 2D Array - DS

https://www.hackerrank.com/challenges/2d-array/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

Given a $6 \times 6$ 2D array, $arr$, an hourglass is a subset of values with indices falling in the following pattern:

``` text
a b c
 d 
e f g
```

There are $16$ houglasses in a $6 \times 6$ array. The $hourglass \ sum$ is the sum of the values in an houglass. Calculate the hourglass in sum for every hourglass in $arr$, then print the $maximum$ hourglass sum.

## Example

$ arr = $

``` text
-9 -9 -9  1 1 1 
 0 -9  0  4 3 2
-9 -9 -9  1 2 3
 0  0  8  6 6 0
 0  0  0 -2 0 0
 0  0  1  2 4 0
```

The $16$ hourglass sums are:

``` text
-63, -34, -9, 12, 
-10,   0, 28, 23, 
-27, -11, -2, 10, 
  9,  17, 25, 18
```

The highest hourglass sum is $28$ from the hourglass beginning at row $1$, coulumn $2$:

``` text
0 4 3
  1 
8 6 6
```

**Note:** If  you have already solved the Java domain's Java 2D Array challenge, you may wish to skip this challenge.

## Function Description

Complete the function $houglassSum$ with the following parameter(s):

- $int \ arr[6][6]:$ a 2-D array of integers.

## Returns

- $int:$ the maximum hourglass sum

## Input Format

Each of the $6$ lines of inputs $arr[i]$ contains $6$ space-separated integers $arr[i][j]$.

## Constraints

- $-9 \leq ar[i][j] \leq 9$
- $0 \leq i, j \leq 5$


### Sample Input 0 

``` text
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
```

### Sample Output 0 

``` text
19
```

#### Explanation

The hourglass with the maximum sum($19$) is:

``` text
2 4 4
  2  
1 2 4
```



