package Stack.Implementaciones;

public class Stack<T> {
    private Node<T> top;

    public Stack() {
        this.top = null;
    }

    // Método para verificar si la pila está vacía
    public boolean isEmpty() {
        return top == null;
    }

    // Método para agregar un elemento a la pila
    public void push(T value) {
        Node<T> newNode = new Node<>(value);
        newNode.next = top;
        top = newNode;
    }

    // Metodo para mostrar la lista enlazada
    public static<T> void printList(Node<T> head) {
        Node<T> current = head;
        // recorrer hasta current sea null
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    // Método para eliminar y retornar el elemento en la parte superior de la pila
    public Node<T> pop() {
        if (isEmpty()) {
            return null;
        }
        Node<T> temp = top;
        top = top.next;
        return temp;
    }

    // Método para obtener el valor del elemento en la parte superior de la pila
    public T peek() {
        if (isEmpty()) {
            throw new IllegalStateException("Pila está vacía");
        }
        return top.data;
    }

    // Método para obtener el tamaño de la pila
    public int size() {
        int count = 0;
        Node<T> current = top;
        while (current != null) {
            count++;
            current = current.next;
        }
        return count;
    }

    public static void main(String[] args) {
        Stack<Integer> pila = new Stack<>();
        Boolean isEmpty = pila.isEmpty();
        System.out.print(isEmpty);
        System.out.println();
        pila.push(1);
        pila.push(2);
        pila.push(3);
        pila.push(4);
        pila.push(5);

        printList(pila.top);
        System.out.println();
        System.out.println("Elemento en la parte superior: " + pila.peek());
        System.out.println("Tamaño de la pila: " + pila.size());
        pila.pop();
        System.out.println("Después de hacer pop:");
        printList(pila.top);

    }

}
