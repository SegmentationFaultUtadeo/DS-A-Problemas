# 621 Secret Research

https://onlinejudge.org/external/6/621.pdf


At a certain laboratory results of *secret research* are thoroughly encrypted. A result of a single experiment is stored as an information of its completion:

‘positive result’, ‘negative result’, ‘experiment failed’ or ‘experiment not completed’

The encrypted result constitutes a string of digits S, which may take one of the following forms:

- positive result $S = 1 or S = 4 or S = 78$
- negative result $S = S35$
- experiment failed $S = 9S4$
- experiment not completed $S = 190S$


(A sample result $S35$ means that if we add digits 35 from the right hand side to a digit sequence then we shall get the digit sequence corresponding to a failed experiment)

You are to write a program which decrypts given sequences of digits.

## Input 


A integer $n$ stating the number of encrypted results and then consecutive n lines, each containing a
sequence of digits given as ASCII strings.

## Output 

For each analysed sequence of digits the following lines should be sent to output (in separate lines):

- + for a positive result
- - for a negative result
- * for a failed experiment
- ? for a not completed experiment

In case the analysed string does not determine the experiment result, a first match from the above list should be outputted.

### Sample Input

``` text
4
78
7835
19078
944
```

### Sample Output 

``` text
+
-
?
*
```

