package com.three;

public class Main {
    public static void main(String[] args) {
        Object obj = 10;//先自动装箱向上转型
        int temp = (Integer)obj;//向下转型为Integer后自动拆箱
        System.out.println(temp*2);
    }
}
