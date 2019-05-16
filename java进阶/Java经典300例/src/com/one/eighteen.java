package com.one;

import java.util.Scanner;
public class eighteen {
    public static void main(String [] args){
        Scanner a = new Scanner(System.in);
        System.out.println("请输入x的值");
        long x = a.nextLong();
        System.out.println("请输入y的值");
        long y = a.nextLong();
        System.out.println("x="+x+"y="+y);
        x=x^y;
        y=y^x;
        x=x^y;
        System.out.println("x="+x+"y="+y);
    }
}
