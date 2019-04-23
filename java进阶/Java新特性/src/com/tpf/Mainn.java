package com.tpf;

public class Mainn {
    public static void main(String[] args) {
        Message<Integer> m = new Message<>();
        Message<String> p = new Message<>();
        m.setMsg(20);
        p.setMsg("makd");
    }
    public static void fun(Message<?> temp){
        System.out.println(temp.getMsg());
    }
}
