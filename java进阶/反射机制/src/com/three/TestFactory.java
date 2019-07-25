package com.three;

public class TestFactory {
    public static void main(String[] args) {
        Fruit a = Factory.getInstance("com.three.Apple");
        Fruit b = Factory.getInstance("com.three.Orange");
        a.eat();
        b.eat();
    }
}
