package com.one;

public class Main {
    public static void main(String[] args) {
        IMessage msg = new MessageImpl();
        msg.print();
        msg.fun();
    }
}
