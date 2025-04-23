class Node {
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    constructor(head = null){
        this.head = head;   
    }

    get_head() {
        return this.head;
    }

    is_empty(){
        if (this.get_head() === null) {
            console.log('Lista vacía');
        } else {
            console.log('La lista no está vacía');
        }
    }

    delete_at_head() {
        if (this.head !== null) {
            this.head = this.head.next;
        }
    }

    print_list(){
        let current = this.head;
        while (current !== null){
            console.log(current.value);
            current = current.next;
        }
    }
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
}

// Crear nodos
let node1 = new Node(20);
let node2 = new Node(30);
let node3 = new Node(50);
node1.next = node2;
node2.next = node3;

// Crear la lista
let list1 = new LinkedList(node1);

// Obtener la cabeza
let head = list1.get_head();
console.log("Cabeza:", head.value);

// Verificar si la lista está vacía
list1.is_empty();

// Eliminar la cabeza
//list1.delete_at_head();

// Imprimir la lista
list1.print_list();

list1.search(50)