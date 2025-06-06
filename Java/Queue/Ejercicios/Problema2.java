package Queue.Ejercicios;

import java.util.Arrays;
import java.util.List;

import Queue.Implementaciones.Queue;

public class Problema2 {

    private static Queue<Integer> invertirKElementos(Queue<Integer> cola, int k) {
        if (cola == null || cola.size() < k || k <= 0) {
            return null;
        }

        return null;
    }

    public static void main(String[] args) {

        Queue<Integer> cola = new Queue<>();
        List<Integer> lista = Arrays.asList(1, 2, 3, -4, 5, 6, 7, 8, 9, 10);
        for (Integer i : lista) {
            cola.enqueue(i);
        }

    }

}
