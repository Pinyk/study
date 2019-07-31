package com.stack;

import java.util.Stack;

public class PopAndPushTest {
    public static void main(String[] args) {
        Stack<String> all = new Stack<>();
        all.push("gyk");
        all.push("hh");
        all.push("xh");
        System.out.println(all.pop());
        System.out.println(all.pop());
        System.out.println(all.pop());
        System.out.println(all.pop());
    }
}
