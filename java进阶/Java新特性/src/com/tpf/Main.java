package com.tpf;

public class Main {
    public static void main(String[] args) {
        Message<String> m = new Message<String>();
        m.setMsg("djksh");
        fun(m);
        /*Message<Integer> p = new Message<Integer>();
        p.setMsg(20);
        fun(p);*/       //一旦fun方法中这样定义 就不能接受除String类型外的其他参数
    }
    public static void fun(Message<String>temp){
        System.out.println(temp.getMsg());
    }
}
