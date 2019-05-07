package com.two;

public class Main {
    public static void main(String[] args) {
        String info = "0000000";
        fun(()->{
            System.out.println("11111");
            System.out.println(info);
        });
    }
    public static void fun(IMessage msg){
        msg.print();
    }
}
