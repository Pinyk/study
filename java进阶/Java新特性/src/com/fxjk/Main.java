package com.fxjk;

public class Main {
    public static void main(String[] args) {
        IMessage<String> msg = new MessageImpl<String>();
        msg.print("高");
    }
}
