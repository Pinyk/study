package com.five;
//构造方法私有化   需要static定义属性调用
public class A {
    static A a = new A();
    private A(){
    }
    public void print(){
            System.out.println("hello");
    }
}
