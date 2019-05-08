package com.three;

public class Main {
    public static void main(String[] args) {
        IMessage<String> msg = String::compareTo;
        System.out.println(msg.compare("C","B"));
    }
}
