package com.myself;

public class Main {
    public static void main(String[] args){
        Member m=new Member(1,"高宇科");
        Car c=new Car("奥迪");
        m.setCar(c);
        c.setMember(m);
        System.out.println(m.getCar().getInfo());
        System.out.println(c.getMember().getInfo());
    }
}
