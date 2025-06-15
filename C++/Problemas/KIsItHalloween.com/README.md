# IsIthalloween.com

https://open.kattis.com/problems/isithalloween

HiQ recently got and assignment from a client to create a clone of the immensely popular website [https://isithalloween.com/](https://isithalloween.com/). The website is a very simple one. People will visit the site occasionally to see if it is Halloween. Whenever it is, the website should print out `yup`, otherwise it should print out `nope` on the screen. 

Since HiQ is such a poplar firm, they don't have time to complete this assignment right now. Their frontend engineers have already programmed the frontend of the website that prints out `yup` or `nope`, but not the backend microservice that determines whether it is indeed Halloween or not. Do you have time to help them? 

The behaviour of the server should be as follows: it gets as input the current date in the format FEB 9, where FEB is the month given in three letters (JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOW, DEC) and 9 is the day of the month starting at 1. It should then determine if this date represents October 31 or December 25 (since $31_s = 25_{10}  $). 

## Input 

The input consists of a single line containing a date of the format FEB 9, ith the month and date separated by a single space. 

## Output 

If the date is October 31 or December 25, output `yup`. Otherwise, output `nope`. 


### Sample Input 1

``` text
OCT 31
```

### Sample Output 1

``` text
yup 
```

### Sample Input 2 

``` text
JUN 24
```

### Sample Output 2

``` text
nope
```

