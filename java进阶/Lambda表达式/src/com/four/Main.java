package com.four;

public class Main {
    public static void main(String[] args) {
        fun((a,b)->{
            return a+b;
        });
    }
    public static void fun(IMessage msg){
        System.out.println(msg.add(4,5));
    }
}
