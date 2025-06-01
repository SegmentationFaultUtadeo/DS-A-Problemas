# Tabla de Contenidos


- [LeetCode 707. Design Linked List](#leetcode-707-design-linked-list)
- [Enunciado](#enunciado)
- [Soluciones](#soluciones)
  - [Utilizando longitud lista](#utilizando-un-atributo-de-longitud-de-la-lista)
    - [Conceptualmente](#conceptualmente)

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


