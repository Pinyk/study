package com.two;

public class Main {
    public static void main(String[] args) {
        IMessage<String> msg = "kkkk"::toUpperCase;//因为接口中的抽象方法有返回值 所以必须实例化String
        String str = msg.upper();
        System.out.println(str);
    }
}