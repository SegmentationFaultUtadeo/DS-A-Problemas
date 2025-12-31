# Tallas de los tipos de datos enteros

## Unsigned int 

Dentro de una arquitectura de 32 bits, un entero sin signo (*unsigned int*) puede ser representado como:

$$
\begin{align*}
    (11111111111111111111111111111111)_2 &= 2^{31} + 2^{30} + \cdots + 2^{0} \\ 
    &= 2^0 + 2^1 + 2^2 + \cdots + 2^{31} \\ 
    &= 2^{32} - 1 \\ 
    &= 4,294,967,295 \\
    &\approx 4 \cdot 10^9
\end{align*}
$$

## Signed int 

Número más grande que se puede representar en un entero con signo (*signed int, int*) que utiliza una representación de 32 bits:

$$
\begin{align*}
    (11111111111111111111111111111111)_2 &= 2^{30} + 2^{29} + \cdots + 2^1 + 2^0 \\ 
    &= 2^0 + 2^1 + 2^2 + \cdots + 2^{30} \\ 
    &= 2^{31} - 1 \\ 
    &= 2,147,483,647 \\ 
    &\approx 2 \cdot 10^9
\end{align*}
$$

## Unsigned long long int 

El número más grande que se puede representar en un entero largo lrago sin signo (*unsigned long long int*) que utiliza una representación de 64 bits:

$$
\begin{align*}
    (111111111111111111111111111111111111111111111111111111&1111111111)_2 \\ 
    &= 2^{63} + 2^{63} + 2^{61} + \cdots + 2^{0} \\ 
    &= 2^0 + 2^1 + 2^2 + \cdots + 2^{63} \\ 
    &= 2^{64} - 1 \\ 
    &= 18,446,744,073,709,551,615 \\ 
    &\approx 18 \cdot 10^{18}
\end{align*}
$$

## Signed long long int 

Número más grande que se puede representar en un entero largo largo con signo (*signed long long int, long long int*) que se utiliza en una representación de 64 bits:

$$
\begin{align*}
    (111111111111111111111111111111111111111111111111111111&1111111111)_2 \\
    &= 2^{62} + 2^{61} + 2^{60} + \cdots + 2^{0} \\ 
    &= 2^{0} + 2^{1} + 2^2 + \cdots + 2^{62} \\ 
    &= 2^{63} - 1 \\ 
    &= 9,223,372,036,854,775,807 \\ 
    &\approx 9 \cdot 10^{18}
\end{align*}
$$
