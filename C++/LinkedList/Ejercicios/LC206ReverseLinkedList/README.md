# Tabla de Contenidos

- [LeetCode 206. Reverse Linked List](#leetcode-206-reverse-linked-list)
- [Enunciado](#enunciado)
- [Soluciones](#soluciones)
  - [Fuerza bruta](#fuerza-bruta)
    - [Conceptualmente](#conceptualmente)
    - [Código](#código)
  - [Iterando](#iterando)
    - [Conceptualmente](#conceptualmente-1)
    - [Código](#código-1)
  - [Recursividad](#recursividad)
    - [Conceptualmente](#conceptualmente-2)
    - [Código](#código-2)
- [Solución puesta en LeetCode](#solución-puesta-en-leetcode)



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
NULL <---  |  1  |  <--- |  2  |  <--- |  3  |  <--- |  4  |  <--- |  5  |
           +-----+       +-----+       +-----+       +-----+       +-----+
                                                                     head 
```

Por lo tanto, la lógica principal es en primer lugar, iterar sobre la lista hasta llegar a `NULL` e ir cambiando los enlaces con el anterior nodo. Aquí ya podemos definir dos punteros; `prev` y `iterator`. El primero inicia en `NULL` y el segundo en la cabeza de la lista. Es decir, visualmente se ve así:

``` text
        +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL    |  1  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
        +-----+       +-----+       +-----+       +-----+       +-----+
prev     head
        iterator
```

Una vez inicializadas estos dos punteros se empieza a iterar hasta que iterator sea igual a `NULL`. No sin antes, tener otro puntero `sig` que va al valor siguiente de `iterator`. Visualmente:


``` text
        +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL    |  1  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
        +-----+       +-----+       +-----+       +-----+       +-----+
prev     head           sig
        iterator
```

Ahora, ya se tiene la referencia del nodo siguiente a `iterator` y lo que se va a hacer es cambiar la referencia del nodo siguiente a `iterator` a que apunte al nodo `prev`. Es decir, que haga lo siguiente:

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  |       |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
           +-----+       +-----+       +-----+       +-----+       +-----+
prev        head           sig
           iterator
```
 
Con esto, la referencia de `iterator` quedó en el nodo anterior, ahora, `prev` va a pasar a ser una copia de `iterator`, visualmente:

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  |       |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
           +-----+       +-----+       +-----+       +-----+       +-----+
            head           sig
           iterator
            prev
``` 

Ahora, iterator pasa a ser una copia del puntero `sig`:

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  |       |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
           +-----+       +-----+       +-----+       +-----+       +-----+
            head           sig
            prev         iterator
``` 

Este ciclo se repite, los 3 pasos anteriores serán:
 
1. Pasar puntero `sig` a la refencia siguiente a `iterator`.
2. Apuntar `iterator` a `prev`.
3. Pasar `prev` a tener la misma referencia de `iterator`.
4. Pasar `iterator` con la misma referencia de `sig`.

Por lo tanto, haciendo estos cuatro pasos una vez más, la lista quedaría:

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  | <---  |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
           +-----+       +-----+       +-----+       +-----+       +-----+
            head          prev           sig
                                       iterator
``` 

Si se continua haciendo el ciclo hasta que `iterator` sea `NULL`, los punteros se van a ver:

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  | <---  |  2  |  <--- |  3  |  <--- |  4  |  <--- |  5  |  NULL 
           +-----+       +-----+       +-----+       +-----+       +-----+
            head                                                     prev    sig
                                                                          iterator
``` 

Una vez que `iterator` llega a `NULL` este ya no hace el enlace a `prev`. Sin embargo, aún falta que `head` esté puesto de manera correcto, `prev` es el puntero que está referenciando a la cabeza, por lo tanto, lo último que se debe hacer es igualar `head` a `prev`, quedando la lista final como:

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  | <---  |  2  |  <--- |  3  |  <--- |  4  |  <--- |  5  |  NULL 
           +-----+       +-----+       +-----+       +-----+       +-----+
                                                                     prev
                                                                     head iterator
``` 

`sig` se elimina debido a que es una variable que se inicializa dentro del ciclo y una vez fuera de este, esta muere.



### Código




## Recursividad

### Conceptualmente 


### Código


## Solución puesta en LeetCode
    
``` c++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* iterator = head;
        ListNode* prev = nullptr;
        while (iterator != nullptr){
            ListNode* sig = iterator -> next;
            iterator -> next = prev;
            prev = iterator;
            iterator = sig;
        }
        return prev;
    }
};
```
