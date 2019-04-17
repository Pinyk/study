package com.two;

public class Main {
    public static void main(String[] args) {
        Boolean obj = new Boolean(true);//将基本数据类型装箱
        boolean temp = obj.booleanValue();//将基本数据类型拆箱
        System.out.println(temp);
    }
}
