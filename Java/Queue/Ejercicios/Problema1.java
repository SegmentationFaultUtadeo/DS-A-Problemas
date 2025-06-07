package Queue.Ejercicios;

import Queue.Implementaciones.Queue;

public class Problema1 {

    private static boolean isValid(String exp) {
        // crear cola para almacenar los caracteres
        Queue<String> cola = new Queue<>();
        // recorrer la expresión
        for (int i = 0; i < exp.length(); i++) {
            // validar si la cola esta vacia
            if(!cola.isEmpty()){
                // obtener el último elemento de la cola
                String rear = cola.rear();
                // Validar si el último abre y el actual cierra
                if ((rear.equals("{") && exp.charAt(i) == '}') ||
                    (rear.equals("[") && exp.charAt(i) == ']') ||
                    (rear.equals("(") && exp.charAt(i) == ')')) {
                    // si es así, quitar el último elemento de la cola
                    cola.dequeue();
                    // continuar con el siguiente carácter y no encolar el actual
                    continue;
                } 
            }
            // encolar el carácter actual
            cola.enqueue(String.valueOf(exp.charAt(i)));
        }
        // Si la cola está vacía, la expresión es válida
        return cola.isEmpty();
    }
    
    public static void main(String[] args) {
        
        String exp = "{}[]()";
        String exp2 = "{[[}[]](])";
        String exp3 = "[((]](]))";
        String exp4 = "{{}}()[[]]";
        String exp5 = "{{{";


        System.out.println("La expresión es valida: " + isValid(exp));
        System.out.println("La expresión es valida: " + isValid(exp2));
        System.out.println("La expresión es valida: " + isValid(exp3));
        System.out.println("La expresión es valida: " + isValid(exp4));
        System.out.println("La expresión es valida: " + isValid(exp5));

        
    }
}
