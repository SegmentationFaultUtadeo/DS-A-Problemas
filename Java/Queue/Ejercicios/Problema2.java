package Queue.Ejercicios;

import java.util.Arrays;
import java.util.List;

import Queue.Implementaciones.Queue;
import Stack.Implementaciones.Stack;

public class Problema2 {

    private static Queue<Integer> invertirKElementos(Queue<Integer> cola, int k) {
        if (cola == null || cola.size() < k || k <= 0) {
            return null;
        } else {
            // Extraer los primeros k elementos y guardarlos en una pila
            Stack<Integer> pila = new Stack<>();

            for (int i = 0; i < k; i++) {
                pila.push(cola.dequeue());
            }

            // Invertir los elementos de la pila y volver a insertarlos en la cola
            while (!pila.isEmpty()) {
                cola.enqueue(pila.pop());
            }

            // Mover los elementos restantes de la cola al final
            int cantElementos = cola.size() - k;
            for (int i = 0; i < cantElementos; i++) {
                cola.enqueue(cola.dequeue());
            }
            Stack.printList(pila.getTop());

            return cola;
        }
    }

    public static void main(String[] args) {

        Queue<Integer> cola = new Queue<>();
        List<Integer> lista = Arrays.asList(1, 2, 3, -4, 5, 6, 7, 8, 9, 10);
        for (Integer i : lista) {
            cola.enqueue(i);
        }
        System.out.println("Cola original: ");
        Queue.printList(cola.getHead());
        System.out.println();
        int k = 5;
        Queue<Integer> colaInvertida = invertirKElementos(cola, k);
        System.out.println("Cola invertida: ");
        Queue.printList(colaInvertida.getHead());

        System.out.println("\n-----------------------------------");
        Queue<Integer> cola2 = new Queue<>();
        List<Integer> lista2 = Arrays.asList(10, -20, 30, 40, -50, 60, 70, 80);
        for (Integer i : lista2) {
            cola2.enqueue(i);
        }
        System.out.println("Cola original: ");
        Queue.printList(cola2.getHead());
        System.out.println();
        int k2 = 3;
        Queue<Integer> colaInvertida2 = invertirKElementos(cola2, k2);
        System.out.println("Cola invertida: ");
        Queue.printList(colaInvertida2.getHead());

        System.out.println("\n-----------------------------------");
        Queue<Integer> cola3 = new Queue<>();
        List<Integer> lista3 = Arrays.asList(5, 6, 12, 5, 2, 7, 3);
        for (Integer i : lista3) {
            cola3.enqueue(i);
        }
        System.out.println("Cola original: ");
        Queue.printList(cola3.getHead());
        System.out.println();
        int k3 = 10;
        Queue<Integer> colaInvertida3 = invertirKElementos(cola3, k3);
        System.out.println("Cola invertida: ");
        if (colaInvertida3 == null) {
            System.out.println("null");
        } else if (colaInvertida3.isEmpty()) {
            Queue.printList(colaInvertida3.getHead());
        }

        System.out.println("\n-----------------------------------");
        Queue<Integer> cola4 = new Queue<>();
        List<Integer> lista4 = Arrays.asList(43, 5, 12, 4, 9, 6, 5);
        for (Integer i : lista4) {
            cola4.enqueue(i);
        }
        System.out.println("Cola original: ");
        Queue.printList(cola4.getHead());
        System.out.println();
        int k4 = -10;
        Queue<Integer> colaInvertida4 = invertirKElementos(cola4, k4);
        System.out.println("Cola invertida: ");
        if (colaInvertida4 == null) {
            System.out.println("null");
        } else {
            Queue.printList(colaInvertida4.getHead());
        }

    }

}
