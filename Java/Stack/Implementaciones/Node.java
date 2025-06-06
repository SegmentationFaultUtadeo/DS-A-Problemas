package Stack.Implementaciones;

public class Node<T> {
    T data;
    Node<T> next;

    // Constructor para crear el nodo y establecer el siguiente nodo como null
    Node(T data) {
        this.data = data;
        this.next = null;
    }
}
