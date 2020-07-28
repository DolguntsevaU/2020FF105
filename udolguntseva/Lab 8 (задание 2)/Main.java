package com.company;
        import java.util.Random;
        import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.println("Введите размер матрицы: ");
        int size = s.nextInt();
        System.out.println("Размер= "+size);
        int[][] array = new int[size][size];

        Random random = new Random();
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {

                array[i][j] = random.nextInt(100);

                System.out.printf("%2d ", array[i][j]);
            }
            System.out.println();
        }

        boolean toSort = true;

        while (toSort){
            toSort = false;

            for (int i = 1; i < array.length; i++) {
                if (array[i][0] < array[i - 1][0]) {
                    toSort = true;

                    int[] tmp = array[i];
                    array[i] = array[i - 1];
                    array[i - 1] = tmp;
                }
            }
        }

        System.out.println("\nAfter sort:");

        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                System.out.printf("%2d ", array[i][j]);
            }
            System.out.println();
        }

    }
}
