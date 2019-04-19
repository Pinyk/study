package com.one;

public class A {
    public static void main(String[] args) {
        System.out.println("开始");
        try{
            System.out.println(10/0);
            System.out.println("1111");
        }catch(ArithmeticException e){    //处理算术异常
            System.out.println("出现异常");
        }
        System.out.println("结束");
    }
}
