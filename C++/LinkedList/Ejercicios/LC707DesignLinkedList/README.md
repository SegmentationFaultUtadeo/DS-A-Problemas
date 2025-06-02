# Tabla de Contenidos


- [LeetCode 707. Design Linked List](#leetcode-707-design-linked-list)
- [Enunciado](#enunciado)
- [Soluciones](#soluciones)
  - [Utilizando longitud lista](#utilizando-un-atributo-de-longitud-de-la-lista)
    - [MyLinkedList()](#mylinkedlist)
      - [Conceptualmente](#conceptualmente)
      - [Código](#código)
      - [Análisis de complejidad](#análisis-de-complejidad)
        - [Temporal](#temporal)
        - [Espacial](#espacial)
    - [int get(int index)](#int-get-int-index) 
      - [Conceptualmente](#conceptualmente-1)
      - [Código](#código-1)
      - [Análisis de complejidad](#análisis-de-complejidad)
        - [Temporal](#temporal-1)
        - [Espacial](#espacial-1)
    - [void addAtHead(int val)](#void-addathead-int-val)
      - [Conceptualmente](#conceptualmente-2)
      - [Código](#código-2)
      - [Análisis de complejidad](#análisis-de-complejidad)
        - [Temporal](#temporal-2) 
        - [Espacial](#espacial-2)
    - [void addAtTail(int val)](#void-addattail-int-val)
      - [Conceptualmente](#conceptualmente-3)
      - [Código](#código-3)
      - [Análisis de complejidad](#análisis-de-complejidad-3)
        - [Temporal](#temporal-3)
        - [Espacial](#espacial-3)
    - [void addAtIndex(int index, int val)](#void-addatindex-int-index-int-val)
      - [Conceptualmente](#conceptualmente-4)
      - [Código](#código-4)
      - [Análisis de complejidad](#análisis-de-complejidad-4)
        - [Temporal](#temporal-4)
        - [Espacial](#espacial-4)
    - [void deleteAtIndex(int index)](#voi-deleteatindex-int-index)
      - [Conceptualmente](#conceptualmente-5)
      - [Código](#código-5)
      - [Análisis de complejidad](#análisis-de-complejidad-5)
        - [Temporal](#temporal-5)
        - [Espacial](#espacial-5)
    
# LeetCode 707. Design Linked List 

Ejercicio sacado de: https://leetcode.com/problems/design-linked-list/


# Enunciado

Design your implementation of the linked list. You can choose to use a singly or doubly linked list. 

A node in a singly linked list should have two attributes: `val` and `next`. `val` is the value of the current node, and `next` is a pointer/reference to the next node.

If you want to use the doubly linked list, you will need one more attribute `prev` to indicate the previous node in the linked list. Assume all nodes in the linked list are **0-indexed**.

Implement the `MyLinkedList` cass:

- [X] `MyLinkedList()` Initializes the `MyLinkedList` object.
- [X] `int get(int index)` Get the value of the `index-th` node in the linked list. If the index is invalid, return -1.
- [X] `void addAtHead(int val)` Add a node of the value `val` before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
- [X] `void addAtTail(int val)` Append a node of value `val` as the last element of the linked list.
- [X] `void addAtIndex(int index, int val)` Add a node of value `val` before the `index-th` node in the linked list. If `index` equals the length of the linked list, the node will be appended to the end of the linked list. If `index` is greater than the length, the node **will not be inserted**.
- [X] `void deleteAtIndex(int index)` Delete the `index-th` node in the linkedlist, if the index is valid. 


**Constraints:**

- `0 <= index, val <= 1000`
- Please do not use the built-in LinkedList library.
- At most `2000` calls will be made to `get`, `addAtHead`, `addAtTail`, `addAtIndex` and `deleteAtIndex`.

--- 

# Soluciones

Todas las soluciones tienen por defecto una clase llamada `Node` que cuenta con dos atributos `val` (encargado de almacenar el valor numérico del nodo)  y `next` (puntero encargado de referenciar al nodo siguiente que se quiere apuntar). El constructor recibe un valor entero numérico y se encarga de asignar los atributos `val` del nodo al dato que recibe y se inicializa por defecto que el nodo al que está apuntando sea nulo. En código esto se ve:

``` c++
class Node{
    public:
        int val;
        Node* next;
        Node(int data){
            val = data;
            next = nullptr;
        }
};
```

Cuando uno va a crear una instancia de la clase, haciendo `Node* nuevoNodo = new Node(1)` se está creando un nuevo nodo y que en nuestro espacio se ve algo así:

``` text
+-----+
|  1  |  ---> NULL 
+-----+
```

El nodo sería la cajita, el valor lo que está dentro de esta y la flechita es la referencia (el puntero `next`).

Entonces, si se vuelve a crear otro nodo, como `Node* nuevoNodo2 = new Node(2)` nuestra memoria se ve algo así:

``` text
+-----+
|  1  |  ---> NULL 
+-----+

+-----+
|  2  |  ---> NULL 
+-----+
```


Más adelante se explica cómo enlazar diferentes nodos entre sí.

## Utilizando un atributo de longitud de la lista

### `MyLinkedList()`

#### Conceptualmente


La clase cuando se inicializa no toma ningún argumento, se crea una nueva lista que tiene dos atributos; `head`, puntero de tipo `Node`; `length_list` valor entero. Al inicializarla como `MyLinkedList** obj = new MyLinkedList()` se inicializa `head` como un puntero nulo (no hay nodos, por lo tanto se colocan como nulos), y también el atributo `length_list` se inicializa como 0. Ambos atributos tienen sentido debido a que todavía no hay nada en la lista enlazada.


#### Código

La implementación en código de la clase se ve así:


``` c++
class MyLinkedList{
    public:
        Node* head;
        int length_list;
        MyLinkedList(){
            head = nullptr;
            length_list = 0;
        }
};
```

Como se comentó, cuando se inicializa la clase tiene dos atributos `head` y `length_list` que toman valores de `nullptr` y de 0, respectivamente.

Una instancia de la clase (objeto) se puede crear como:

``` c++
MyLinkedList* obj = new MyLinkedList();
```

No toma parámetros y la variable `obj` es un puntero.


#### Análisis de complejidad 
##### Temporal
##### Espacial
### `int get(int index)`

#### Conceptualmente

De acuerdo a la descripción de lo que debe hacer la función "Get the value of the `index-th` node in the linked list. If the index is invalid, return -1.".  Decimos que un índice es invalido cuando este es menor que $0$ o cuando es mayor o igual a la longitud de la lista, esto último se puede explicar así, haga de cuenta una lista enlazada con 3 elementos (longitud 3) con sus respectivos índices.

``` text
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
```


Ahí ya se puede ver que, si queremos acceder al índice de mismo valor que la longitud (3), este no existe dentro de nuestros índices disponibles, por lo tanto, se considera invalido.

En caso de que el índice sea valido, debemos crear un puntero `iter` que empiece desde la cabeza de la lista y que itere hasta cuando esté en el índice que se necesita. Después, se retorna el valor de `iter`.

Supongamos la misma lista de 3 elementos descrita anteriormente y se desea obtener el valor del índice 2. Se puede utilizar un ciclo `for` desde `i=0` hasta `i < 2` y que se incremente de uno en uno. Por cada iteración, `iter` va a avanzar al siguiente nodo y se detiene cuando `i` sea igual a `2` (en este caso). Esto se ve algo así:

``` text
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
 iter
```

Se comienza con un nodo `iter` en la cabeza de la lista. Ahora, se pasa a iterar hasta llegar al índice `2`.

``` text
Condición: i < 2
i = 0

+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  iter

+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
                 iter
i = 1
```

En el primer paso `iter` pasó a estar en el índice 1 y a `i` se le sumó 1.

``` text
Condición: i < 2
i = 1

+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  iter

+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
                                iter
i = 2
```


Para la segunda iteración `iter` pasó a estar en el índice 2 y `i` pasa a tener el valor de 2. Aquí, `iter` ya se encuentra en el índice que se requiere y teniendo en cuenta que `i = 2`, esto ya rompe la condición de que `i` deba ser menor a 2. Por lo tanto, aquí se acaba el ciclo y se retorna el valor de `iter` (3).


#### Código

Esta función toma un argumento `index` de tipo numérico entero. Se inicializa la función como:

``` c++
int get(int index){
    ...
}
```

Ahora, va a comprobar si el índice es invalido (menor a 0 o mayor o igual a la longitud de la lista), si sí, retorna -1.

``` c++
if (index < 0 || index >= length_list) return -1;
```

En caso contrario, se realiza todo el ciclo que se describió anteriormente; inicializando `iter` desde `head`, hacer el ciclo `for` hasta que quede en el índice que se necesita y después se retorna el valor de este.

``` c++
Node* iter = head;

for (int i = 0; i < index; i++) iter = iter -> next;

return iter -> val;
```

Todo esto en conjunto se ve de la siguiente manera:

``` c++
int get(int index){

    if (index < 0 || index >= length_list) return -1;
    
    Node* iter = head;
    
    for (int i = 0; i < index; i++) iter = iter -> next;
    
    return iter -> val;
}
```

#### Análisis de complejidad 
##### Temporal
##### Espacial
### `void addAtHead(int val)`

#### Conceptualmente

La descripción de la función contiene lo siguiente: "Add a node of the value `val` before the first element of the linked list. After the insertion, the new node will be the first node of the linked list." Aquí pueden pasar dos escenarios, si la lista está vacía y si ya hay un nodo como cabeza. 

En el primer caso es sencillo, se crea un nuevo nodo, se asigna como la cabeza de la lista y se aumenta el atributo de `length_list` de la lista enlazada. Se tiene la siguiente lista enlazada con nada de cabeza y longitud 0.

``` text
lista enlazada{
  +------+
  | NULL |
  +------+
    head

 length_list = 0
}
```

Se crea un nuevo nodo con valor 1:

``` text
lista enlazada{
  +------+
  | NULL |
  +------+
    head

 length_list = 0
}

newNode{
+-----+
|  1  |  ---> NULL
+-----+
}
```

Una vez creado el nodo, se asigna como cabeza este nodo creado y se aumenta la longitud de la lista, esto quedaría como:

``` text
lista enlazada{
   +-----+
   |  1  |  ---> NULL
   +-----+
     head

 length_list = 1
}
```

Y listo, eso sería para el caso en el que no hay nada en la lista.

Ahora, para el caso en el que no está vacía la lista. Haga de cuenta la siguiente lista enlazada con 3 elementos:

``` text
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head

length_list = 3
```

Se va a agregar un elemento (4) al inicio, por lo tanto, la lista se espere que quede como:

``` text
+-----+        +-----+        +-----+        +-----+
|  4  |  --->  |  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+        +-----+
  head

length_list = 4
```

Para llegar a esto se puede hacer de manera sencilla. En primer lugar, es crea un nuevo nodo con el valor que se quiere agregar a la lista.

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head

length_list = 3
}

newNode{
+-----+
|  4  |  ---> NULL
+-----+
}
```

Ahora, hacemos que `newNode` en lugar de apuntar a NULL apunte a la cabeza actual de la lista:

``` text
lista enlazada{
+-----+        +-----+        +-----+        +-----+
|  4  |  --->  |  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+        +-----+
                 head

length_list = 3
}
```

Por último, el atributo `head` lo asignamos al nuevo nodo e incrementamos el valor de `length_list`:

``` text
lista enlazada{
+-----+        +-----+        +-----+        +-----+
|  4  |  --->  |  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+        +-----+
  head                 

length_list = 4
}
```


#### Código

La función no retorna nada, únicamente operaciones con la lista enlazada, se define como una `void` que toma un valor `val` numérico entero:

``` c++
void addAtHead(int val){
    ...
}
```


Teniendo en cuenta todo lo que se mencionó anteriormente. En primer lugar, como en ambos casos se necesita crear un nuevo nodo, entonces se crea al principio.

``` c++
Node* newNode = new Node(val);
```

Ahora, se realiza el primer caso para cuando la lista está vacía, asignando la cabeza al nuevo nodo e incrementando el atributo de la longitud de la lista:

``` c++
if (head == nullptr){
    head = newNode;
    length_list++;
    return;
}
```

Ahora, para el siguiente caso se asigna que el atributo de `next` del nuevo nodo apunte a la cabeza actual y después la cabeza de la lista sea este último nodo. Al igual que con el anterior caso, se incrementa en uno la longitud de la lista.

``` c++
newNode -> next = head;
head = newNode;
length_list++;
```

Estos dos casos en conjunto se ven en la función como:

``` c++
void addAtHead(int val){
    Node* newNode = new Node(val);
    
    if (head == nullptr){
        head = newNode;
        length_list++;
        return;
    }

    newNode -> next = head;
    head = newNode;
    length_list++;
}
```

#### Análisis de complejidad 
##### Temporal
##### Espacial
### `void addAtTail(int val)`


#### Conceptualmente

Teniendo en cuenta la descripción de lo que debe hacer la función: "Append a node of value `val` as the last element of the linked list.". Pueden existir dos casos; si la lista no contienen ningún elemento, si no está vacía la lista.

Para el caso en el que la lista es vacía nos podemos ayudar de la función `addAtHead(int val)` y simplemente llamarla. No se va a explicar muy a profundidad esto, ya que la función ya está implementada en el caso anterior, por lo tanto, no es necesario volver a hacer todo el diagrama y lo demás.

En caso de que no esté vacía, se va a iterar hasta el último nodo de la lista y que este ahora apunte al nuevo nodo recién creado. Haga de cuenta la siguiente lista enlazada con tres elementos:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head

length_list = 3
}
```

Se desea agregar al final el nodo con el valor 4 para que quede de la siguiente manera: 

``` text
lista enlazada{
+-----+        +-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  --->  |  4  |  ---> NULL
+-----+        +-----+        +-----+        +-----+
  head

length_list = 4
}
```

En primer lugar se necesita crear un nuevo nodo con el valor de 4:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head

length_list = 3
}

newNode{
+-----+
|  4  |  ---> NULL
+-----+
}
```

Después se inicializa una variable `iter` que comience desde la cabeza de la lista:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head
  iter

length_list = 3
}

newNode{
+-----+
|  4  |  ---> NULL
+-----+
}
```

Ahora, hasta llegar al último elemento de la lista, eso se hace teniendo la condición de ¿Es `iter -> next` diferente a `nullptr`? Si sí, asigne el siguiente de `iter` a `iter`. Esto se puede ver para nuestra lista enlazada como:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head
  iter

length_list = 3
}

¿Es el siguiente nodo de iter diferente a NULL? Sí, entonces haga iter el siguiente nodo:

lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head
                 iter

length_list = 3
}

¿Es el siguiente nodo de iter diferente a NULL? Sí, entonces haga iter el siguiente nodo:

lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
  head
                                iter

length_list = 3
}

¿Es el siguiente nodo de iter diferente a NULL? No, entonces pare.

```

Como se vio, una vez que el siguiente nodo a `iter` es NULL, el ciclo se detiene e `iter` queda como el último nodo.

Como paso final, se enlaza el nodo creado al valor siguiente de `iter` y se suma 1 al atributo de `length_list`, quedando de la siguiente manera:

``` text
lista enlazada{
+-----+        +-----+        +-----+       +-----+        
|  1  |  --->  |  2  |  --->  |  3  |  ---> |  4  |  --->  NULL
+-----+        +-----+        +-----+       +-----+        
  head
                                iter

length_list = 4
}
```


#### Código

Al igual que en la anterior función, no se está retornando nada al llamar la función, por lo tanto es una función de tipo `void` que toma un argumento `val` de tipo numérico entero:


``` c++
void addAtTail(int val){
    ...
}
```



Ahora, para la implementación en código, primero se realiza el primer caso para cuando la lista está vacía y se llama a la función ya definida de `addAtHead(val)`, quedando:

``` c++
if (head == nullptr){addAtHead(val); return;};
```


En el caso contrario, se procede a crear el nuevo nodo, iterar hasta el último nodo de la lista, después enlazar el nuevo nodo creado al final e incrementar el valor de `length_list`:

``` c++
Node* newNode = new Node(val);
Node* iter = head;

while (iter -> next != nullptr) iter = iter -> next;

iter -> next = newNode;
length_list++;
```

Ambos casos en conjunto hacen quedar a la función como:


``` c++
void addAtTail(int val){

    if (head == nullptr){addAtHead(val); return;};
    
    Node* newNode = new Node(val);
    Node* iter = head;
    
    while (iter -> next != nullptr) iter = iter -> next;
    
    iter -> next = newNode;
    length_list++;
}
```

#### Análisis de complejidad 
##### Temporal
##### Espacial
### `void addAtIndex(int index, int val)` 


#### Conceptualmente

Teniendo en cuenta el enunciado: "Add a node of value `val` before the `index-th` node in the linked list. If `index` equals the length of the linked list, the node will be appended to the end of the linked list. If `index` is greater than the length, the node **will not be inserted**."

Se toman tres casos de acuerdo al enunciado; cuando el índice es mayor a la longitud de la lista, cuando el índice es igual a la longitud de la lista y el otro es cuando el índice es menor a la longitud de la lista.

El primer caso (índice mayor a la longitud de la lista) simplemente no se hace nada y se finaliza la función.

Para el segundo caso (índice de igual longitud al de la lista enlazada), nos dicen que toca agregarlo al final de la lista, con ayuda de la función `addAtTail(val)` esto se puede conseguir.

Para el tercer caso, necesitamos iterar hasta la nodo anterior del índice y después hacemos que el nuevo nodo apunte al mismo nodo que está apuntando el iterador, por último el nodo que está iterando pasa a apuntar al nuevo nodo (obviamente, incrementar el tamaño de la lista).


Este último caso, lo vamos a detener más paso a paso. En primer lugar supongamos tener la siguiente lista enlazada con sus respectivos índices y cabeza:


``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  head

length_list = 3
}

```

Y se desea ingresar en el índice 1 un nodo con el valor de 4, quedando como:

``` text
lista enlazada{
+-----+       +-----+        +-----+        +-----+
|  1  |  ---> |  4  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+       +-----+        +-----+        +-----+
   0             1              2              3
  head

length_list = 4
}

```

En primer lugar, se debe crear un nuevo nodo con el valor de 4, esto se ve como:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  head

length_list = 3
}

newNode{
+-----+
|  4  |  ---> NULL
+-----+
}
```

Ahora, debemos iterar desde `head` hasta llegar al índice anterior del que debemos mover. Por lo tanto, esto se ve así:

``` text
Se desea colocar en el índice 1 el número 4

lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  head
  iter

length_list = 3
}

¿Se está en el índice anterior a 1? Sí, entonces pare.
```
 
En este caso se queda ahí y no hay necesidad de más iteraciones, en caso contrario se hace que `iter` pase al siguiente nodo y se aplica la condición.

Ahora, se va a empezar a jugar con `newNode` y los enlaces. De momento tenemos lo siguiente:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  head
  iter 

length_list = 3
}

newNode{
+-----+
|  4  |  ---> NULL
+-----+
}
```

En primer lugar, vamos a hacer que el enlace que tiene el nodo `newNode` pase a apuntar al siguiente nodo de `iter`, quedando:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> NULL
+-----+    --> +-----+        +-----+
   0       |      1              2
  head     |
  iter     |
           |
+-----+    |
|  4  |  --⯾
+-----+

length_list = 3
}

```

Gráficamente se puede ver fácilmente qué es lo que se debe hacer después. Vamos a arreglar el enlace de `iter` que ahora apunte al nuevo nodo y también sumar 1 a `length_list` todo esto queda como:

``` text
lista enlazada{
+-----+        +-----+        +-----+       +-----+
|  1  |  --->  |  4  |  --->  |  2  |  ---> |  3  |  ---> NULL
+-----+        +-----+        +-----+       +-----+
   0              1              2             3
  head
  iter
           
length_list = 4
}
```



#### Código

Al igual que la anterior función, únicamente se realizan operaciones para la lista y no se retorna nada, por lo tanto es una función de tipo `void` que toma dos argumentos; `index` de tipo numérico entero y `val` de igual tipo.

``` c++
void addAtIndex(int index, int val){
    ...
}
```


Para empezar, se codifican los dos primeros casos para cuando el índice es mayor a la longitud de la lista enlazada y tabién para cuando es igual. Como se dijo en la parte conceptual, para el primer caso no se hace nada y para el segundo se llama a la función `addAtTail()`:

``` c++
if (index > length_list) return;

if (index == length_list) {addAtTail(val); return;};
```

Ahora, para el tercer caso se crea el nuevo nodo con `val` y también la variable `iter` que empiece desde la cabeza de la lista.

``` c++
Node* newNode = new Node(val);
Node* iter = head;
```

Ahora, se utiliza un ciclo `for` para ir hasta el índice anterior al que se desea mover y en cada iteración es mueve el `iter` al siguiente nodo.

``` c++
for (int i = 0; i < index - 1; i++) iter = iter -> next;
```

Y ahora, por último se juega con los enlaces como se mencionó en la parte conceptual, moviendo el enlace de `newNode` a que sea el nodo que está apuntando `iter` y después que `iter` apunte a `newNode`:

``` c++
newNode -> next = iter -> next;
iter -> next = newNode;
length_list++;
```


Todo esto en conjunto se ve:

``` c++
void addAtIndex(int index, int val){
    
    if (index > length_list) return;
    
    if (index == length_list) {addAtTail(val); return;};
    
    Node* newNode = new Node(val);
    Node* iter = head;
    
    for(int i = 0; i < index - 1; i++) iter = iter -> next;
    
    newNode -> next = iter -> next;
    iter -> next = newNode;
    length_list++;
}
```


#### Análisis de complejidad 
##### Temporal
##### Espacial
### `void deleteAtIndex(int index)`


#### Conceptualmente

Teniendo en cuenta el enunciado: "Delete the `index-th` node in the linkedlist, if the index is valid.". Se toman 3 posibles casos; cuando el índice es mayor o igual a la longitud de la lista, cuando el índice es 0, y para el resto de casos.

En el primer caso únicamente es comprobar si el índice es mayor o igual a la longitud de la lista y si sí, retornar nada.

Para el segundo caso (índice igual a 0), tengamos en cuenta la siguiente lista con solo un nodo y su índice:

``` text
lista enlazada{
+-----+
|  1  |  --->  NULL
+-----+
   0
  head
           
length_list = 1
}
```

Debemos eliminar el nodo de la cabeza, por lo tanto, podemos crear un nodo `temp` que sea una copia de la cabeza, quedando:

``` text
lista enlazada{
+-----+
|  1  |  --->  NULL
+-----+
   0
  head
           
length_list = 1
}

temp {
+-----+
|  1  |  --->  NULL
+-----+
}
```

Ahora, la cabeza va a ser igual al enlace de `temp` y se reduce la longitud de la lista en 1

``` text
lista enlazada{

   NULL         
  head
           
length_list = 0
}

temp {
+-----+
|  1  |  --->  NULL
+-----+
}
```

Ahora, se elimina el nodo `temp`

``` text
lista enlazada{

   NULL         
  head
           
length_list = 0
}
           +--------------------------+    
           |      temp {              |
           |      +-----+             |
delete ->  |      |  1  |  --->  NULL |
           |      +-----+             |
           |      }                   |
           +--------------------------+
```

Ahora, para el último caso, vamos a tener en cuenta la siguiente lista de 4 nodos con sus respectivos índices:

``` text
lista enlazada{
+-----+        +-----+        +-----+       +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> |  4  |  ---> NULL
+-----+        +-----+        +-----+       +-----+
   0              1              2             3
  head
           
length_list = 4
}
```

Se quiere eliminar el nodo del índice 2, la lista deberá quedar:

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  4  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  head
           
length_list = 3
}
```

Se crea primero una variable `iter` que desde `head` vaya iterando (`i`) por toda la lista hasta llegar al nodo anterior que se desea eliminar.

``` text
lista enlazada{
+-----+        +-----+        +-----+       +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> |  4  |  ---> NULL
+-----+        +-----+        +-----+       +-----+
   0              1              2             3
  head
  iter         
length_list = 4
}
```

Ahora, empieza el ciclo:

``` text
Se desea eliminar el nodo del índice 2.
 
i = 0

¿Es i menor a 2-1? Sí, entonces: 

lista enlazada{
+-----+        +-----+        +-----+       +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> |  4  |  ---> NULL
+-----+        +-----+        +-----+       +-----+
   0              1              2             3
  head
                 iter         
length_list = 4
}
i = 1
```

Ahora, pasa a la segunda iteración:

``` text
Se desea eliminar el nodo del índice 2.
 
i = 1

¿Es i menor a 2-1? No, entonces pasar al siguiente paso: 

```

Como se pudo ver, el ciclo hace que `iter` llegue al nodo anterior (índice 1) al que se desea eliminar (índice 2). Ahora, se va a crear un nodo (`temp`) que sea una copia del nodo que se desea eliminar (el siguiente al `iter`):


``` text
lista enlazada{
+-----+        +-----+        +-----+       +-----+
|  1  |  --->  |  2  |  --->  |  3  |  ---> |  4  |  ---> NULL
+-----+        +-----+        +-----+       +-----+
   0              1              2             3
  head
                 iter
                                temp
length_list = 4
}
```

Ahora, se va a cambiar el enlace del nodo donde está `iter` a ser el nodo que está enlazado a `temp`, esto se ve así:

``` text
lista enlazada{
+-----+        +-----+        +-----+       +-----+
|  1  |  --->  |  2  |  ---|  |  3  |  ---> |  4  |  ---> NULL
+-----+        +-----+     |  +-----+  |    +-----+
   0              1        |     2     |       3
  head                     |    temp   |
                 iter      +-----------|
                                
length_list = 4
}
```

Aquí ya se puede ver que el nodo `temp` ya no está enlazado a `iter`. Ahora únicamente toca eliminar el nodo `temp` y disminuir el atributo de longitud de la lista, quedando como: 

``` text
lista enlazada{
+-----+        +-----+        +-----+
|  1  |  --->  |  2  |  --->  |  4  |  ---> NULL
+-----+        +-----+        +-----+
   0              1              2
  head
                 iter
length_list = 3
}
```


#### Código

La función no retorna nada, por lo tanto se toma como `void`:

``` c++
void deleteAtIndex(int index){
    ...
}
```



Para el primer caso, es sencillo hacer la condición y hacer que si se cumple entonces no retorne nada:


``` c++
if (index >= length_list) return;
```

Ahora, para el segundo caso (se desea eliminar la cabeza de la lista), se crea un nodo `temp` que esté en la cabeza. Después se asigna la cabeza como al nodo que está apuntando `temp` y después se elimina `temp` y disminuyendo el atributo del tamaño.

``` c++
if (index == 0){
    Node* temp = head;
    head = temp -> next;
    length_list--;
    delete temp;
    temp = nullptr;
    return;
}
```

Para el caso restante, se comienza inicializando `iter` en la cabeza y hacerla recorrer la lista hasta que alcance el nodo que va antes del que se desea eliminar:

``` c++
Node* iter = head;
for (int i = 0; i < index - 1; i++) iter = iter -> next;
```

Por último, se hace el juego de los enlaces; se crea una variable `temp` con el nodo que se desea eliminar, `iter` ahora pasa a apuntar al nodo que apunta `temp`, se disminuye la longitud de la lista y se elimina el nodo `temp`.

``` c++
Node* temp = iter -> next;
iter -> next = temp -> next;
length_list--;
delete temp;
temp = nullptr;
```


Todo esto en conjunto forma:

``` c++
void deleteAtIndex(int index){
    if (index >= length_list) return;
    
    if (index == 0){
        Node* temp = head;
        head = temp -> next;
        length_list--;
        delete temp;
        temp = nullptr;
        return;
    }

    Node* iter = head;
    for (int i = 0; i < index - 1; i++) iter = iter -> next;
    
    Node* temp = iter -> next;
    iter -> next = temp -> next;
    length_list--;
    delete temp;
    temp = nullptr;
}
```



#### Análisis de complejidad 
##### Temporal
##### Espacial
