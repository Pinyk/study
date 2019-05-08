package com.one;

public class Main {
    public static void main(String[] args) {
        //相当于给zhuanhuan方法附上了String中valueOf方法的属性
        IMessage<Integer,String>msg = String :: valueOf;
        String str = msg.zhuantuan(1000);
        System.out.println(str.replaceAll("0","9"));
    }
}
