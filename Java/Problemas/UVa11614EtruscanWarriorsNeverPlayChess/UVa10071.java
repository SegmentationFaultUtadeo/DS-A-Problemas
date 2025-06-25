package Problemas.UVa11614EtruscanWarriorsNeverPlayChess;

import java.util.Scanner;

public class UVa10071 {

    public static void main(String[] args) {

        System.out.println("Escribe un número: ");

        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLong()) {
            int n = sc.nextInt();
            int filas = (int) Math.floor((-1 + Math.sqrt(1 + 8 * n)) / 2);
            System.out.println("Filas completas: " + filas);
            System.out.println("\nEscribe otro número:");
        }
    }

}
