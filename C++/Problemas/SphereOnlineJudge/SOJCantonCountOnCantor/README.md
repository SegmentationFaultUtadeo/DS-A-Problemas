# CANTON - Count on Cantor

https://www.spoj.com/problems/CANTON/en/


One of the famous proofs of modern mathematics if Georg Cantor's demonstration that the set of rational numbers is enumerable. The proof works by using an explicit enumeration of rational numbers as shown in the diagram below. 

``` text
1/1 1/2 1/3 1/4 1/5 . . .
2/1 2/2 2/3 2/4
3/1 3/2 3/3
4/1 4/2
5/1
```


In the above diagram, the first term is $1/1$, the second term is $1/2$, the third term is $2/1$, the fourth term is $3/1$, the fifth term is $2/2$, and so on. 

## Input 

The input starts with a line containing a single integer $t\leq 20$, the number of test cases. $t$ test cases follow. 

Then, it contains a single number per line. 

## Output 

You are to write a program that will read a list of numbers in the range from $1$ to $10^7$ and will print for each number the corresponding term in Cantor's enumeration as given below. 

### Example

``` text
Input: 
3
3
14
7

Output:
TERM 3 IS 2/1
TERM 14 IS 2/4
TERM 7 IS 1/4
```
