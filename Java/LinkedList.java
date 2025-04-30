class Node {
    int data;
    Node next;

    // Constructor para crear el nodo y establecer el siguiente nodo como null
    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList {
	// Clase para crear una lista enlazada
    static Node head;

    // Metodo para mostrar la lista enlazada
    public static void printList(Node head) {
        Node current = head;
        // recorrer hasta current sea null
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    // Metodo para validad si el head de la lista es vacio
    public static boolean isEmpty(Node head) {
        if (head == null) {
            return true;
        }
        return false;
    }

    // Metodo para obtener el valor de head
    public static int getHead(Node head) {
        int headValue = head.data;
        return headValue;
    }

    // Metodo para buscar elementos en la lista enlazada
    public static Node search(Node head, int value) {
        Node current = head;
        while (current != null) {
            if (current.data == value) {
                return current;
            }
            current = current.next;
        }
        return null;
    }
    
    // Metodo para insertar en head
    public static Node insertAtHead(int value) {
        Node newNode = new Node(value);
        newNode.next= head;
        head = newNode;
        return newNode;
    }

    // Metodo para eliminar ene head
    public static Node deleteHeadNode() {
        if (head == null) {
            return null;
        }
        Node temp = head;
        head = head.next;
        return temp;
    }
    
    // Metodo para insertar un elemento de la cola 
    public static Node insertTailNode(int value) {
    	Node newNode = new Node(value);
    	Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
        return current;
    }
    // Metodo para insertar nodo en k posicion
    public static Node insertAtK(int value, int k) {
        Node newNode = new Node(value);
        if (k == 0) {
            newNode.next = head;
            head = newNode;
            return head;
        }
        Node current = head;
        for (int i = 0; i < k - 1; i++) {
            current = current.next;
        }
        if (current != null) {
            newNode.next = current.next;
            current.next = newNode;
        }
        return head;
    }

    public static void main(String[] args) {

        // Crear el primer nodo de la lista enlazada
        insertAtHead(1);
        insertAtHead(2);
        insertAtHead(3);
        insertAtHead(4);
        insertAtHead(5);
        insertTailNode(6);
        insertTailNode(7);
        deleteHeadNode();
        insertAtK(8, 3);
        printList(head);
        //System.out.println(head.next.data);

    }

}
