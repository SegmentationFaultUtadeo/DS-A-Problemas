// Clase Nodo
class Node {
    constructor(value){
        this.value = value;    // Valor que almacena el nodo
        this.next = null;      // Referencia al siguiente nodo
    }
}

// Clase Lista Enlazada
class LinkedList {
    constructor(head = null){
        this.head = head;      // Nodo cabeza de la lista
    }

    // Obtener la cabeza de la lista
    get_head() {
        return this.head;
    }

    // Verificar si la lista está vacía
    is_empty(){
        if (this.get_head() === null) {
            console.log('Lista vacía');
        } else {
            console.log('La lista no está vacía');
        }
    }

    // Eliminar el nodo en la cabeza
    delete_at_head() {
        if (this.head !== null) {
            this.head = this.head.next;
        }
    }

    // Imprimir todos los nodos de la lista
    print_list(){
        let current = this.head;
        while (current !== null){
            console.log(current.value);
            current = current.next;
        }
    }

    // Buscar un valor en la lista
    search(value) {
        let nodo = this.head;
        let count = 1;

        while (nodo !== null) {
            if (nodo.value === value) {
                console.log('El valor', value, 'está en la posición', count);
                return count;
            }
            nodo = nodo.next;
            count++;
        }
        console.log('El valor', value, 'no se encuentra en la lista.');
        return -1;
    }

    // Insertar un nodo al inicio de la lista
    insert_at_head(value) {
        let nuevoNodo = new Node(value);
        nuevoNodo.next = this.head;
        this.head = nuevoNodo;
    }

    // Insertar un nodo al final de la lista
    insert_at_tail(value){
        let nuevoNodo = new Node(value);

        if (this.head === null) {
            this.head = nuevoNodo;  // Si la lista está vacía, el nuevo nodo es la cabeza
            return;
        }

        let current = this.head;
        while (current.next !== null){
            current = current.next;
        }
        current.next = nuevoNodo;
    }
}

// Crear nodos individuales
let node1 = new Node(20);
let node2 = new Node(30);
let node3 = new Node(50);
node1.next = node2;
node2.next = node3;

// Crear lista con node1 como cabeza
let list1 = new LinkedList(node1);

list1.print_list();

// Mostrar cabeza
let head = list1.get_head();
console.log("Cabeza:", head.value); // Debería imprimir 20

// Verificar si la lista está vacía
list1.is_empty(); // No debería estar vacía

// Eliminar el nodo cabeza
list1.delete_at_head(); // Elimina el nodo con valor 20

// Imprimir la lista actual
list1.print_list(); // Debería imprimir 30 y 50

// Buscar el valor 50
list1.search(50); // Debería indicar que está en la posición 2

// Insertar un nodo al inicio
list1.insert_at_head(2345);

// Insertar un nodo al final
list1.insert_at_tail(348934);

// Imprimir la lista final
list1.print_list(); // Debería imprimir 2345, 30, 50, 348934