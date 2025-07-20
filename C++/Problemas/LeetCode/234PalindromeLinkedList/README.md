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

Se tiene en cuenta la lista:

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  1  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL 
+-----+       +-----+       +-----+       +-----+       +-----+
 head
```


Se desea llegar a

``` text
           +-----+       +-----+       +-----+       +-----+       +-----+ 
NULL <---  |  1  |  <--- |  2  |  <--- |  3  |  <--- |  4  |  <--- |  5  |
           +-----+       +-----+       +-----+       +-----+       +-----+
                                                                     head 
```

Utilizando un método de fuerza bruta.

Se puede crear una nueva estructura de datos para ir almacenando los valores de la lista, la que mejor corresponde es la de la pila o *stack*. Esto se debe a que mientras se va iterando sobre la lista enlazada original, se puede ir almacenando una copia de los valores en una pila para luego volver a iterar y utilizar el LIFO (*Last In First Out*) del *stack*. Es decir, empezamos a iterar desde el head de la lista y también creando un *stack*.

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  1  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL            
+-----+       +-----+       +-----+       +-----+       +-----+
 head
 iter
 
Stack
+-----+
|     |
+-----+
|     |
+-----+
|  1  |
+-----+
```

`iter` va a seguir iterando sobre toda la lista hasta encontrar un puntero nulo y también guardando una copia de los valores de los nodos en el *stack*. Repitiendo este proceso, queadaría:

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  1  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL
+-----+       +-----+       +-----+       +-----+       +-----+
 head                                                               iter
 
Stack
+-----+
|  5  |
+-----+
|  4  |
+-----+
|  3  |
+-----+
|  2  |
+-----+
|  1  |
+-----+
```

Una vez teniendo todos los valores en el *stack* se puede volver a iterar desde el `head` y cambiar el valor de ese nodo, por el que está en el *top* del *stack*, esto se hace con la función `pop()` del *stack*, es decir, remueve el último elemento de esta estructura. Gráficamente, lo podemos representar como: 

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  5  |  ---> |  2  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL
+-----+       +-----+       +-----+       +-----+       +-----+
 head                                                               
 iter
 
Stack
+-----+
|     |
+-----+
|  4  |
+-----+
|  3  |
+-----+
|  2  |
+-----+
|  1  |
+-----+
```

Esta primera iteración cambia el valor del primer nodo por el que está en la cabeza de la pila. En una segunda iteración esto se ve como:

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  5  |  ---> |  4  |  ---> |  3  |  ---> |  4  |  ---> |  5  | --> NULL
+-----+       +-----+       +-----+       +-----+       +-----+
 head                                                               
               iter
Stack
+-----+
|     |
+-----+
|     |
+-----+
|  3  |
+-----+
|  2  |
+-----+
|  1  |
+-----+
```


Una vez entendido este proceso, se itera hasta que `iter` sea diferente a NULL.

``` text
+-----+       +-----+       +-----+       +-----+       +-----+ 
|  5  |  ---> |  4  |  ---> |  3  |  ---> |  2  |  ---> |  1  | --> NULL
+-----+       +-----+       +-----+       +-----+       +-----+
 head                                                               iter

Stack
+-----+
|     |
+-----+
|     |
+-----+
|     |
+-----+
|     |
+-----+
|     |
+-----+
```



### Código

El código está en la función `reverse_linked_stack(Node* head)` recibiendo la cabeza de la lista y devolviendo esta misma. En primer lugar, se inicializa la pila utilizando la estructura que provee C++ de `stack`.

``` c++
Node* reverse_linked_stack(Node* head){
    stack<int> s;
```

Seguido, se inicializa el nodo iterador (`iter`) empezando por la cabeza de la lista y se detiene cuando esté al final de la lista. El valor del nodo sobre el que esté `iter` va a ser guardado en el *stack* utilizando la función `.push()` y se avanza al siguiente nodo el que está `iter`.

``` c++
Node* iter = head;
while (iter != nullptr){
    s.push(iter -> data);
    iter = iter -> next;
}
```

Después se utiliza un segundo recorrido por la lista empezando por la cabeza y lo que se hace es reemplazar el valor del nodo sobre el que está el iterador y lo reemplaza por el nodo que está en el *top* de la pila, después se quita este elemento y por último, el iterador avanza al siguiente nodo.

``` c++
iter = head;
while (iter != nullptr){
    iter -> data = s.top();
    s.pop();
    iter = iter -> next;
}
```

Entonces, toda la función queda como:

``` c++
Node* reverse_linked_stack(Node* head){
    stack<int> s;
    Node* iter = head;
    while (iter != nullptr){
        s.push(iter -> data);
        iter = iter -> next;
    }
    
    iter = head;
    while (iter != nullptr){
        iter -> data = s.top();
        s.pop();
        iter = iter -> next;
    }
    return head;
}
```

Al compilar el programa, ejecutar la función e imprimir la lista, se obtiene:


``` text
Lista original
1 -> 2 -> 3 -> 4 -> 5 -> NULL

Lista reversed (stack)
5 -> 4 -> 3 -> 2 -> 1 -> NULL
```

Probando que el algoritmo sí funciona.


#### Análisis de complejidad 

##### Temporal

Este algoritmo sigue una complejidad temporal con dos ciclos separados, es decir, $O(n + n) = O(2n) \approx O(n)$.

##### Espacial

Una complejidad espacial de $O(n)$, ya que, se crea una nueva estructura (el *stack*) para el desarrollo del ejercicio. Es decir, nuestro algoritmo cumple en tiempos, sin embargo, si la entrada es demasiado grande, es probable que nos quedemos sin memoria.

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


El código que está presente en el `.cpp` empieza utilizando algunas convenciones para el código e importando librerías.

``` c++
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
```

El `include` permite importar toda la librería estándar que tiene C++. `define` está para que `endl` actúe como una nueva línea, esto ya que el `endl` que provee la librería estándar, *flushea* el buffer antes de hacer la nueva línea. En términos simples, se utiliza para mejor rendimiento. Por último, el `namespace` sirve para no tener que escribir `std::cout` sino, únicamente escribir `cout`, haciendo todo mucho más sencillo.

``` c++
class Node {
    public:
        int data;
        Node* next;
        
        Node(int val){
            data = val;
            next = nullptr;
        }
};
```

La clase `Node` es la que ya se viene manejando en la lista enlazada simple, un nodo tiene un valor `data` y un puntero al siguiente nodo, por defecto, este puntero es nulo.

``` c++
class LinkedList{
    private: 
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
        
        Node* get_head(){
            return head;
        }
        
        void insert(int val){
            Node* newNode = new Node(val);
            
            if (head == nullptr){
                head = newNode;
            } else {
                Node* temp = head;
                while (temp -> next != nullptr)
                    temp = temp -> next;
                temp -> next = newNode;
            }
        }
        
        void printList(){
            Node* temp = head;
            while(temp != nullptr){
                cout << temp -> data << " -> ";
                temp = temp -> next;
            }
            cout << "NULL" << endl;
        }
};
```

Estos métodos ya se conocen, por lo tanto, no se va a explicar mucho de ellos.

``` c++
void printListNode(Node* head){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}
```

Esta función se utiliza para imprimir la lista dada únicamente la cabeza, se diferencia del método `printList()` debido a que en `printListNode()` recibe la cabeza de la lista y no es un método en sí de la clase `LinkedList`, mientras que la otra sí lo es y no requiere recibir ningún parámetro.


``` c++
Node* reverse_linked_list(Node* temp){
    if (head == nullptr) return nullptr;
    
    Node* iterator = head;
    Node* prev = nullptr;
    
    while (iterator != nullptr){
        Node* sig = iterator -> next;
        iterator -> next = prev;
        prev = iterator;
        iterator = sig;
    }
    return prev;
}
```

Aquí está la lógica fundamental del método, en primer lugar se mira si la lista está vacía (`head == nullptr`), si es así retorna nulo. Después se inicializan dos punteros; `iterator`, que inicia en la cabeza; y `prev`, que apunta a nulo. Se hace un ciclo `while` que finaliza cuando `iterator` sea nulo, si no es el caso, entonces inicializa otro puntero `sig` que referencia al siguiente nodo de `iterator`. Después, se cambia el enlace del siguiente nodo al que apunta `iterator` y se cambia al de `prev`. `prev` pasa a tener el mismo valor que `iterator` y por último, `iterator` pasa a donde está `sig`. Al final, se retorna `prev` debido a que `iterator` y `sig` terminan en nulo, por lo tanto, la cabeza ahora pasará a ser `prev`.


``` c++
int main(){

    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    
    cout << "Lista original" << endl;
    
    list.printList();
    
    cout << end << "Lista reversed" << endl;
    
    Node* arr_2 = reversed_linked_list(list.get_head());
    printListNode(arr_2);
    
    return 0;
}
```

Al compilar el programa y ejecutarlo, la salida es:

``` text
Lista original
1 -> 2 -> 3 -> 4 -> 5 -> NULL

Lista reversed
5 -> 4 -> 3 -> 2 -> 1 -> NULL
```

Comprobando que sí está correcto el programa.

#### Análisis de complejidad 

##### Temporal

Debido a que únicamente iteramos una vez y se van cambiando los enlaces, decimos que este algoritmo tiene una complejidad temporal de $O(n)$.

##### Espacial

La lista no se incrementa ni se necesita de más espacio de memoria, por lo tanto, decimos que la complejidad espacial es constante $O(1)$.


## Recursividad

### Conceptualmente 


### Código


## Solución puesta en LeetCode

LeetCode ya tiene precompilada la estructura de la lista enlazada y de los nodos, por lo tanto, no es necesario crearla y únicamente centrarse en hacer la función de `reverseList()`. Según el enunciado, el parámetro de entrada es la cabeza de la lista, por lo tanto, podemos asignar un iterador que comience desde la cabeza y seguir el algoritmo que ya se describió anteriormente en la sección de [Iterando](#iterando). 
    
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
    
