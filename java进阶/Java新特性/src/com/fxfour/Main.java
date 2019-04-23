package com.fxfour;

public class Main {
    public static void main(String[] args) {
        Message<String> m = new Message<>();
        m.setMsg("高");
        fun(m);
    }
    public static void fun(Message<?super String> temp){//设置下限   对象只能是String或Object
        System.out.println(temp.getMsg());
    }
}
