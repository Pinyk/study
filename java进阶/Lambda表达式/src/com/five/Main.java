package com.five;

public class Main {
    public static void main(String[] args) {
        fun((int...parm)->IMessage.sum(parm));//Lambda表达式中直接调用接口中定义的静态方法
    }
    public static void fun(IMessage msg){
        System.out.println(msg.add(10,20,30));
    }
}
