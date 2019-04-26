package com.seven;

public class Member {
    private String name;
    private int age;
    private Sex sex;
    public Member(String name,int age,Sex sex){
        this.name=name;
        this.age=age;
        this.sex=sex;
    }
    public String toString(){
        return "姓名："+this.name+"，年龄："+this.age+"，性别："+this.sex;
    }
}
