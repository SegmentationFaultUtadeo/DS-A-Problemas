public class LinkedList {
    // Clase para crear una lista enlazada
    static class Node {
        int data;
        Node next;

        // Constructor para crear el nodo y establecer el siguiente nodo como null
        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // Método para mostrar la lista enlazada
    public static void printList(Node head) {
        Node current = head;
        // recorrer hasta current sea null
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    // Método para validad si el head de la lista es vacio
    public static boolean isEmpty(Node head) {
        if (head == null) {
            return true;
        }
        return false;
    }

    // Método para obtener el valor de head
    public static int getHead(Node head) {
        int headValue = head.data;
        return headValue;
    }

    // Método para insertar en head
    public static Node insertAtHead(int value) {
        Node head = new Node(value);
        return head;
    }
    // Método para insertar un nuevo elemento
    public static Node insertNewNode(Node node, int value) {
        Node newNode = new Node(value);
        while (node.next != null) {
            node = node.next;
        }
        node.next = newNode;
        return node;
    }

    // Método para buscar elementos en la lista enlazada
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
    
    // Método para eliminar un nodo de la lista enlazada

    public static void main(String[] args) {

        // Crear el primer nodo de la lista enlazada
        Node head = insertAtHead(1);

        insertNewNode(head, 2);
        insertNewNode(head, 3);
        printList(head);

        // System.out.println(isEmpty(head));

    }

}