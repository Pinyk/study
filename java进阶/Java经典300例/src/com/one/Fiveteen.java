package com.one;

import java.util.Scanner;
public class Fiveteen {
    public static void main(String [] args){
        System.out.println("请输入一串字符");
        Scanner a = new Scanner(System.in);
        String password = a.nextLine();
        char[] array = password.toCharArray();
        for(int i=0;i<array.length;i++){
            array[i] = (char)(array[i]^20000);//异或操作
        }
        System.out.println("加密结果如下");
        System.out.println(new String(array));
    }
}
