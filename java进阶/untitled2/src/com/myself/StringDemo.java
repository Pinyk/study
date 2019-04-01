package com.myself;

public class StringDemo {
    public static void main(String[] args){
        String stra = new String("hello").intern();
        String strb = "hello";
        System.out.println(stra == strb);
    }
}
