package com.one;

public class Main {
    public static void main(String[] args) {
        fun(()->System.out.println("00000000"));//覆写IMessage的print()方法
    }
    public static void fun(IMessage msg){
        msg.print();
    }
}
