# Tabla de Contenidos

- [LeetCode 206. Reverse Linked List](#leetcode-206-reverse-linked-list)
- [Enunciado](#enunciado)
- [Soluciones](#soluciones)
  - [Fuerza bruta](#fuerza-bruta)
    - [Conceptualmente](#conceptualmente)
    - [Código](#código)
    - [Análisis de complejidad](#análisis-de-complejidad)
      - [Temporal](#temporal)
      - [Espacial](#espacial)
  - [Iterando](#iterando)
    - [Conceptualmente](#conceptualmente-1)
    - [Código](#código-1)
    - [Análisis de complejidad](#análisis-de-complejidad-1)
      - [Temporal](#temporal-1)
      - [Espacial](#espacial-1)
  - [Recursividad](#recursividad)
    - [Conceptualmente](#conceptualmente-2)
    - [Código](#código-2)
- [Solución puesta en LeetCode](#solución-puesta-en-leetcode)



# Problema 2

## Enunciado


**Demostrado sólidos conocimientos algorítmicos y de estructuras de datos, desarrolle una solución para el siguiente problema.**

**Problema 2.**

Dada una **cola** y un número **k**, invierte el orden de los primeros **k** elementos de la **cola**. Si **k** es mejor que **0**, si **k** excede el tamaño de la **cola** o si la **cola** está vacía, se devuelve **NULL**. de lo contrario, se devuelve la **cola** modificada.


**Restricciones**

- $0 \leq cola.length \leq 10^{3}$
- $10^{-3} \leq cola[i] \leq 10^{3}$
- $10^{-3} \leq k \leq 10^{3}$



| Entrada      | Salida |
| ----------- | ----------- |
| $cola = [1, 2, 3, -4, 5, 6, 7, 8, 9, 10]\\ k = 5$      | $[5, -4, 3, 2, 1, 6, 7, 8, 9, 10]$       |
| $cola = [10, -20, 30, 40, -50, 60, 70, 80]\\ k = 3$      | $[30, -20, 10, 40, -50, 60, 70, 80]$       |
| $cola = [5, 6, 12, 5, 2, 7, 3]\\ k =10$      | NULL    |
| $cola = [43, 5, 12, 4, 9, 6, 5]\\ k = -5$      | NULL    |




## Soluciones

### El que pensé




