//Clase nodo

class Node {
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    constructor(head = null){
        this.head = head
    }
}


let node1 = new Node(20)
let node2 = new Node(30)
node1.next = node2

let list1 = new LinkedList(node1)

console.log(list1)
console.log(node2)
