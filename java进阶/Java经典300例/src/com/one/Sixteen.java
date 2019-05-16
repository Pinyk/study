package com.one;

import java.util.Scanner;
public class Sixteen {
    public static void main(String [] args){
        Scanner a = new Scanner(System.in);
        System.out.println("请输入一个整数");
        long num = a.nextLong();
        String cheak = (num%2==0)?"偶数":"奇数";
        System.out.println(cheak);
    }
}
