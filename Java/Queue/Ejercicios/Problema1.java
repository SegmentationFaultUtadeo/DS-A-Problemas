package Queue.Ejercicios;

import Queue.Implementaciones.Queue;
import Stack.Implementaciones.Stack;

public class Problema1 {

    private static boolean isValid(String exp) {
        // crear cola para almacenar los caracteres
        Stack<String> pila = new Stack<>();
        // recorrer la expresión
        for (int i = 0; i < exp.length(); i++) {
            // validar si la cola esta vacia
            if(!pila.isEmpty()){
                // obtener el último elemento de la cola
                String peak = pila.peek();
                // Validar si el último abre y el actual cierra
                if ((peak.equals("{") && exp.charAt(i) == '}') ||
                    (peak.equals("[") && exp.charAt(i) == ']') ||
                    (peak.equals("(") && exp.charAt(i) == ')')) {
                    // si es así, quitar el último elemento de la cola
                    pila.pop();
                    // continuar con el siguiente carácter y no encolar el actual
                    continue;
                } 
            }
            // encolar el carácter actual
            pila.push(String.valueOf(exp.charAt(i)));
        }
        // Si la cola está vacía, la expresión es válida
        return pila.isEmpty();
    }
    
    public static void main(String[] args) {
        
        String exp = "{}[]()";
        String exp2 = "{[[}[]](])";
        String exp3 = "[((]](]))";
        String exp4 = "{{}}()[[]]";
        String exp5 = "[{}}";


        System.out.println("La expresión es valida: " + isValid(exp));
        System.out.println("La expresión es valida: " + isValid(exp2));
        System.out.println("La expresión es valida: " + isValid(exp3));
        System.out.println("La expresión es valida: " + isValid(exp4));
        System.out.println("La expresión es valida: " + isValid(exp5));

        
    }
}
