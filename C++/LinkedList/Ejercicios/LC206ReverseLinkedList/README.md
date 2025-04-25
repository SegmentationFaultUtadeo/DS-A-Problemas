# LeetCode 206. Reverse Linked List 

Ejercicio sacado de: https://leetcode.com/problems/reverse-linked-list/


# Enunciado

Given the `head` of a singly linked list, reverse the list, and return the *reversed* list.


**Example 1:**

![Example 1](https://assets.leetcode.com/uploads/2021/02/19/rev1ex1.jpg)

``` text
Input: head = [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]
```

**Example 2:**

![Example 2](https://assets.leetcode.com/uploads/2021/02/19/rev1ex2.jpg)

``` text
Input: head = [1, 2]
Output: [2, 1]
```


**Example 3:** 

``` text
Input: head = []
Output: []
```

**Constraints:**

- The numbers of nodes in the list is the range `[0, 5000]`
- `-5000 <= Node.val <= 5000`

**Follow up:** A linked list can be reversed either iteratively or recursively. Could you implement both?

--- 

# Soluciones 

## Fuerza bruta

### Conceptualmente

### Código

## Iterando

### Conceptualmente 

Tomaren cuenta la siguiente lista enlazada:

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  1  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
+-----+       +-----+       +-----+       +-----+       +-----+
 head
```


Se quiere llegar a la siguiente:

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  1  |  <--- |  2  |  <--- |  3  |  <--- |  4  |  <--- |  5  |
+-----+       +-----+       +-----+       +-----+       +-----+
                                                          head 
```

Por lo tanto, la lógica principal es en primer lugar, iterar sobre la lista hasta llegar a `NULL` e ir cambiando los enlaces con el anterior nodo. Aquí ya podemos definir dos punteros; `prev` y `iterator`. El primero inicia en `NULL` y el segundo en la cabeza de la lista.

### Código

## Recursividad

### Conceptualmente 


### Código


