package Problemas.UVa11805BafanaBafana;

import java.util.Scanner;

public class UVa11805 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cases = sc.nextInt();

        for (int i = 1; i <= cases; i++) {
            int N = sc.nextInt();
            int K = sc.nextInt();
            int P = sc.nextInt();

            int resultado = ((K + P) % N == 0) ? N : ((K + P) % N);

            System.out.println("Case " + i + ": " + resultado);
        }
    }
}
