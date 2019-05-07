package com.three;

public class Main {
    public static void main(String[] args) {
        String info = "123654";
        fun(()->{
            System.out.println("23232");
            System.out.println(info);
        });
    }
    public static void fun(IMesage msg){
        msg.print();
    }
}
