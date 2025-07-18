# Exponenciación Binaria

Es un algoritmo que permite realizar el cálculo de $a^n$ utilizando $O\log{(n)}$ operaciones. Esto es mucho mejor en comparación al método general que es $O(n)$. 

La idea de la exponenciación binaria es que se divida el trabajo usando la representación binaria del exponente. Por ejemplo, $n$ en base 2:

$$
3^{13} = 3^{1101_2} = 3^8 \cdot 3^4 \cdot 3^1
$$

Since the number $n$ has exactly $\lfloor \log_2{n} \rfloor + 1$ dígitos en base 2, solo se necesita de realizar $O(\log{n})$ multiplicaciones, si se conocen las potencias de $a^1, a^2, a^4, a^8, \dots, a^{2 \lfloor \log{n} \rfloor}$

Esto es fácil de computar debido a que la secuencia es solo el cuadrado del anterior elemento:

$$
3^1 = 3\\
3^2 = (3^1)^2 = 3^2 = 9 \\ 
3^4 = (3^2)^2 = 9^2 = 81 \\ 
3^8 = (3^4)^2 = 81^2 = 6561
$$

Entonces, para obtener la respuesta de $3^{13}$, solo se debe multiplicar por tres de ellos: $3^{13} = 6561 \cdot 81 \cdot 3 = 1594323$

La complejidad final del algoritmo es $O(\log{n})$: toca computar $\log{n}$ potencias de $a$, y después hacerlo como mucho en $\log{n}$ multiplicaciones para obtener la respuesta final.

Tener en cuenta la siguiente recursión:

$$
a^n = \begin{cases}1 & \text{si } n == 0\\
    (a^{\frac{n}{2}})^2 & \text{si } n > 0 \text{ y } n \text{ par } \\ 
    (a^{\frac{n-1}{2}})^2 \cdot a & \text{si } n > 0 \text{ y } n \text{ impar }
    \end{cases}
$$

## Implementación

Se tienen dos de ellas:

### Recursión

Dentro del código `BinaryExponentiation.cpp` se tiene:


```cpp
long long binpow_(long long a, long long b){
    if (b == 0) return 1;
    long long res = binpow_r(a, b/2);
    if (b%2) return res * res * a;
    else return res * res;
} 
```

En primer lugar se tiene el caso base de la recursión:

``` c++
if (b == 0) return 1;
```

Si el exponente $b$ es 0 retorna 1. Esto tiene sentido debido a que:

$$
a^0 = 1 \text{ para todo } a \neq 0
$$

Después empieza la recursión:

``` c++
long long res = binpow_r(a, b/2);
```

Se calcula de forma recursiva $a^{\lfloor b/2 \rfloor}$ y se guarda en `res`. Este valor se va a reutilizar para construir $a^b$ en función de si $b$ es par o impar.

p``` c++
if (b % 2) return res * res * a;
```

Si $b$ es impar entonces:

$$
a^b = a^{\lfloor b / 2 \rfloor} \times a^{\lfoor b / 2 \rfloor} \times a = (a^{b/2})^2 \cdot a
$$

``` c++
else return res * res;
```

Por otro lado, si $b$ es par, entonces:

$$
a^b = a^{b/2} \times a^{b /2} = (a^{b/2})^2
$$

Cada llamada divide el exponente entre 2. Por eso, en vez de hace $b$ multiplicaciones como en el método ingenuo, solo hace $\log{b}$ niveles de recursión.


### Operador a nivel de bits

Este otro enfoque utiliza operadores a nivel de bits y es más eficiente debido a que no toca realizar las llamadas a recursión. Sin embargo, las complejidades de ambos son iguales. Se prefiere este en la implementación.

En primer lugar, se inicializa la variable `res` con valor de `1`. Esta variable almacenará el resultado acumulado de $a^b$. Esto es porque al principio cualquier número elevado a la 0 da 1, se empieza con ese valor neutro.

``` c++
long long res = 1;
```

Ahora, se va a descomponer $b$ en su representación binaria para procesarlo bit a bit. Para esto se inicializa un bucle que continue mientras $b$ sea mayor a 0.

``` c++
while (b > 0){
```

``` c++
if (b & 1) res = res * a;
```

La operación `b & 1` verifica si el bit menos significativo de $b$ es 1, es decir, si $b$ es impar.

Si $b$ es impar se multiplica el resultado por $a$. Esto pasa porque significa que el bit actual de la descomposición binaria de $b$ aporta un factor de $a$ al resultado final. Por ejemplo, si $b = 13 = 1101_2$, el primer bit (menos significativo) es $1$, así que se toma un factor de $a$. 

Ahora, se eleva la base $a$ al cuadrado. Prepara el valor de $a$ para el siguiente bit en $b$. Tome en cuenta la lógica de:

$$
a^b = a^{2^0 \cdot b_0} \cdot a^{2^1 \cdot b_1} \cdot a^{2^2 \cdot b_2} \cdots
$$

``` c++
b >>= 1;
```

Esto desplaza los bits de $b$ una posición a la derecha (divide $b$ por 2). Estamos procesando los bits de $b$ de menos a más significativos (de derecha a izquierda).

Por último, cuando llega a 

``` c++
    }
    return res;
}
```

Cuando $b$ llega a 0, el bucle termina, retornando el valor acumulado en `res` que contiene $a^b$ calculado eficientemente.




