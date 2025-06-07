package Queue.Implementaciones;

public class Queue<T> {
    private Node<T> head;
    private Node<T> tail;

    public Queue() {
        this.head = null;
        this.tail = null;
    }

    // Métodfo para validar si la cola esta vacia
    public boolean isEmpty() {
        return head == null;
    }

    // Método para agregar un elemento al final de la cola
    public void enqueue(T value) {
        Node<T> newNode = new Node<>(value);
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
    }

    // Método para eliminar y retornar el elemento al frente de la cola
    public Node<T> dequeue() {
        if (isEmpty()) {
            return null;
        }
        Node<T> temp = head;
        head = head.next;
        if (head == null) {
            tail = null;
        }
        return temp;
    }

    // Metodo para mostrar la lista enlazada
    public static <T> void printList(Node<T> head) {
        Node<T> current = head;
        // recorrer hasta current sea null
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    // Metodo que devuelve el valor del primer elemento de la cola
    public T front() {
        return head.data;
    }
    // Metodo que devuelve el valor del último elemento de la cola
    public T rear() {
        return tail.data;
    }

    // Metodo para obtener el tamaño de la cola
    public int size() {
        int count = 0;
        Node<T> current = head;
        while (current != null) {
            count++;
            current = current.next;
        }
        return count;
    }

    public static void main(String[] args) {
        Queue<Integer> cola = new Queue<>();
        cola.enqueue(1);
        cola.enqueue(2);
        cola.enqueue(3);

        // imprimir los elementos de la cola
        printList(cola.head);
        System.out.println();
        System.out.println("Primer elemento de la cola: " + cola.front());
        System.out.println("Último elemento de la cola: " + cola.rear());
        // eliminar el primer elemento de la cola
        cola.dequeue();
        printList(cola.head);
    }
}
