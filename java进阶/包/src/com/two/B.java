package com.two;
import com.one.A;

public class B extends A {
    public void print(){
        System.out.println("A类的info="+super.info);
    }
}
