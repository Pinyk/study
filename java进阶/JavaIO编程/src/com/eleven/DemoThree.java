package com.eleven;

import java.util.Scanner;

public class DemoThree {
    public static void main(String[] args) throws Exception{
        Scanner a = new Scanner(System.in);
        int [] data = new int[5];
        int i = 0;
        while(i<5){
            data[i] = a.nextInt();
            i++;
            System.out.println("##" + data[i-1] + "##");
        }

    }
}
