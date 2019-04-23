package com.fxthree;

public class Main {
    public static void main(String[] args) {
        Message<Integer> m1=new Message<>();//Integer是number子类
        m1.setMsg(100);
        fun(m1);
    }
    public static void fun(Message<?extends Number> temp){//定义泛型上限
        System.out.println(temp.getMsg());
    }
}
