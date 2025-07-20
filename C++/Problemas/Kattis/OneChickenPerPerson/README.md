# One Chicken Per Person! 

https://open.kattis.com/problems/onechicken

Dr. Chaz is hosting a programming contest wrap up dinner. Dr. Chaz has severe OCD and is very strict of rules during dinner, specifically, he need to be sure that everyone take exactly 1 piece of chicken at his buffet, even if that will result in an enormous amount of letfovers. This is why evey year before the dinner, Dr. Chaz would give a powerful speech: "Everyone, *one chicken per person!*". 

However, Dr. Chaz does not always have an idea how many pieces of chicken he need, he believes if there are $N$ people at the buffet and everyone taks exactly $1$ piece of chicken, providing $M$ pieces of chicken will be perfect, i.e, is enough and will have no leftovers. Help Dr. Chaz find out whether his decision is good or not!

## Input

The first line contain integers $0 \leq N \leq 1000, \ 0 \leq M \leq 1000, N \neq M$, the number of people at the buffet and the number of pieces of chicken Dr. Chaz is providing. 

## Output 

Output a single line of the form "Dr. Chaz will have $P$ piece[s] of chicken left over!", if Dr. Chaz has enough chicken and $P$ pieces of chichekn will be left over, or "Dr. Chaz needs $Q$ more piece[s] of chicken!" if Dr. Chaz does not have enough pieces of chicken and needs $Q$ more. 


### Sample Input 1

``` text
20 100
```

### Sample Output 1

``` text
Dr. Chaz will have 80 pieces of chicken left over!
```

### Sample Input 2
   
``` text
2 3
```

### Sample Output 2

``` text
Dr. Chaz will have 1 piece of chicken left over!
```

### Sample Input 3

``` text
10 1 
```

### Sample Output 3

``` text
Dr. Chaz needs 9 more pieces of chicken!
```
  
