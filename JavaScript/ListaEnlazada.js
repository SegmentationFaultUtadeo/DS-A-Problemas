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
        let current = this.head;

        if (this.head === null) {
            this.head = nuevoNodo;  // Si la lista está vacía, el nuevo nodo es la cabeza
            return;
        }

        while (current.next !== null){
            current = current.next;
        }
        current.next = nuevoNodo;
    }

    //Buscar un valor y reemplazarlo por un nuevo valor
    update_value(search,value){
        let nuevoNodo = new Node(value);
        let current = this.head;

        while (current.value !== search){
            current = current.next;
        }
        console.log(current)

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

list1.update_value(30,50)

