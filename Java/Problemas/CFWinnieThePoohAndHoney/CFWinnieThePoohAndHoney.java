package Problemas.CFWinnieThePoohAndHoney;

import java.util.Scanner;

public class CFWinnieThePoohAndHoney {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int z = 0; 

        int sum = 0;

        for (int i = 1; i <= n; i++) {
            int ai = sc.nextInt();
            while (ai > k && z < 3 ) {
                ai -= k;
                z++;
            }
            sum += ai;
            z = 0;
        }

        System.out.println(sum);
    }

}
