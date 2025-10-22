# Just Palindromes

Ana is fascinated by the idea of finding palindromes, i.e., sentences that read the same backward and forward once you ignore spaces, punctuation, letter case, and letter characters outside the English alphabet. For example, the following four senteces are palindromic:

``` text
Go deliver a dare vile dog.

Cigar? Toss it in a can. It is so tragic.

Never odd or even!

A man, a plan, a canal: Panama!
```

Note that in a palindrome, only letter characters from the English alphabet are allowed, case does not matter, and all non-letter characters (punctuation, spaces, apostrophes, etc.) are ignored.

On the other hand, the following sentences are not palindromes, even if case and non-letter characters are ignored:

``` text
This is a palindrome.

Hello, world!
```

Help Ana by writing a program that reads a sentence and reports whether it is a palindrome.

## Input

The input consists of multiple test cases. Each test case is a single line containing a sentence $S$ of length $N (0 \leq N < 1000)$ and made only of printable ASCII characters (i.e, characters with ASCII code between 32 and 126, inclusive). The input ends with a line containing a single asterisk '*', which must not be processed.

The input must be read from standard input.

## Output

For each test case, output a single line with the letter character 'Y' if $S$ is a palindrome and 'N' if not.

The output must be written to standard output.


### Sample Input


```text
Go deliver a dare vile dog.
Cigar? Toss it in a can. It is so tragic.
A man, a plan, a canal: Panama!
This is a palindrome.
.---.-
*
```


### Sample Output

``` text
Y
Y
Y
N
Y

```

