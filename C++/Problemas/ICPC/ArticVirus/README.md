# Artic Virus

The year is 2045 and climate change has reached an irreversible tipping point. The polar ice caps are melting
at an alarming rate, causing global sea levels to rise and destabilizing ecosystems. Scientists around the world
have been racing to find solutions to slow the thawing of the poles. Then, one day, they discover something
extraordinary hidden deep within the ice --a network of ancient, highly advanced technology. These dormant
machines, left behind by an ancient civilization, have the power to control the Earth’s temperature.

Reactivating this technology requires solving a series of complex computational problems to restore balance to
the planet’s climate. Ultimately, these problems reduce to finding specific instances of an ancient virus that can
unlock the machines. Unfortunately, this virus no longer ‘‘walks’’ the Earth, so advanced in-vivo laboratory
experimentation is required to recreate instances of the arctic virus that can trigger the unlocking process.

The virus consists of a chain of bases --adenine (A), cytosine (C), guanine (G), and thymine (T )-- and evolves in
one of the following forms:

$$
\phi ::= A | T | \phi C | A \phi | A\phi^{-1} | G \phi^{-1} C
$$

In its simple stage, the arctic virus takes one of two configurations: A and T . Any other form is considered a mutation, which can occur in four ways:

- The notation $\phi C$ means that the virus $\phi$ mutates by adding $C$ to the end of its chain of bases.
- The notation $A\phi$ means that the virus $\phi$ mutates by appending $A$ to the beginning its chain of bases.
- The notation $A\phi^{-1}$ means that the virus $\phi$ mutates by appending $A$ to the beginning of its reversed chain of bases.
- The notation $G\phi^{-1}C$ means that the virus $\phi$ mutates by appending $G$ to the beginning and $C$ to the end of its reversed chain of bases.

For example, A, AT, GTAC, and ACGTCCGA are configurations of the virus, while TTG, CGGAT, and GAGAT are not.


Your task is to help the scientists unlock the secrets of this ancient technology by writing code to identify configurations of the arctic virus. In particular, you are tasked with designing and implementing an algorithm to detect if a chain of bases created in the laboratory corresponds to the virus, in any of its configurations, or not. This will allow the scientists to verify the results of in-vivo experimentation as quickly and efficiently as possible. Failure means the complete melting of the poles and catastrophic consequences for humanity.


## Input

The input consists of several test cases. Each testcase comprises exactly one line of the form $n$ $s$, with
$1 \leq n \leq 1000$, and $s$, with $|s| = n$, a sequence comprising only the characters A, C, G, and T representing the four bases that can appear in the virus.

The input must be read from standard input.

## Output

For each testcase, output a single line with:

- ‘simple’ if s represents a simple stage of the virus;
-  ‘mutation’ if s represents a mutation of the virus; and
- ‘doomed’ if s is not an instance of the arctic virus.

The output must be written to standard output.

### Sample Input

1 A
2 AT
4 GTAC
8 ACGTCCGA
3 TTG
5 CGGAT
5 GAGAT

### Sample Output

simple
mutation
mutation
mutation
doomed
doomed
doomed
