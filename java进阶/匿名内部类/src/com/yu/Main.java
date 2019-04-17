package com.yu;

public class Main {
    public static void main(String args[]){
        fun(new Message() {//实例化接口对象
            public void print() {
                System.out.println("hello");
            }
            });
    }
    public static void fun(Message msg){
        msg.print();
    }
}
