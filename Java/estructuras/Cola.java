package estructuras;

public class Cola {
    private Node head;
    private Node tail;

    public Cola() {
        this.head = null;
        this.tail = null;
    }

    // Métodfo para validar si la cola esta vacia
    public boolean isEmpty() {
        return head == null;
    }

    // Método para agregar un elemento al final de la cola
    public void enqueue(int value) {
        Node newNode = new Node(value);
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
    }

    // Método para eliminar y retornar el elemento al frente de la cola
    public Node dequeue() {
        if (isEmpty()) {
            return null;
        }
        Node temp = head;
        head = head.next;
        if (head == null) {
            tail = null;
        }
        return temp;
    }

    // Metodo para mostrar la lista enlazada
    public static void printList(Node head) {
        Node current = head;
        // recorrer hasta current sea null
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    // Metodo que devuelve el valor del primer elemento de la cola
    public int front() {
        return head.data;
    }
    // Metodo que devuelve el valor del último elemento de la cola
    public int rear() {
        return tail.data;
    }

    public static void main(String[] args) {
        Cola cola = new Cola();
        cola.enqueue(1);
        cola.enqueue(2);
        cola.enqueue(3);

        // imprimir los elementos de la cola
        printList(cola.head);
        System.out.println("\n");
        System.out.println(cola.front());
        System.out.println("\n");
        System.out.println(cola.rear());

        cola.dequeue();
        System.out.println("\n");
        printList(cola.head);
    }
}
