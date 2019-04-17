package com.two;

public class Mainn {
    public static void main(String[] args) {
        Integer obj = 10;//自动装箱
        int temp = obj;//自动拆箱
        obj++;
        System.out.println(temp*obj);
    }
}
