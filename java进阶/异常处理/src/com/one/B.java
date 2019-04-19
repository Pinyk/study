package com.one;

public class B {
    public static void main(String[] args) {
        System.out.println("开始");
        try{
            System.out.println(10/0);
            System.out.println("1111");
        }catch(ArithmeticException e){    //处理算术异常
            e.printStackTrace();         //输出异常的完整信息     异常类中的方法
        }
        System.out.println("结束");
    }
}
