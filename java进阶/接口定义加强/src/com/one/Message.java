package com.one;

interface IMessage {
    public void print();
    default void fun(){//使用default定义方法可直接被实现接口的子类继承  不需要覆写
        System.out.println("22222");
    }
}
