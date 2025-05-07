package estructuras;

public class Pila {
    private Node top;

    public Pila() {
        this.top = null;
    }

    // Método para verificar si la pila está vacía
    public boolean isEmpty() {
        return top == null;
    }

    // Método para agregar un elemento a la pila
    public void push(int value) {
        Node newNode = new Node(value);
        newNode.next = top;
        top = newNode;
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

    public static void main(String[] args) {
        Pila pila = new Pila();
        pila.push(1);
        pila.push(2); 
        pila.push(3);

        printList(pila.top);
    }
    
}
