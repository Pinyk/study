package com.one;

import java.util.Scanner;
public class seventeen {
    public static void main(String [] args){
        Scanner a = new Scanner(System.in);
        System.out.println("请输入一个数");
        long num = a.nextLong();
        System.out.println("该数字乘以2的结果是："+(num<<1));
        System.out.println("该数字乘以4的结果是："+(num<<2));
        System.out.println("该数字乘以8的结果是："+(num<<3));
        System.out.println("该数字乘以16的结果是："+(num<<4));
    }
}
