package com.four;

import java.util.Random;

public class TestDemo {
    public static void main(String[] args) {
        Random a = new Random();
        for(int i = 0; i < 10; i++){
            System.out.println(a.nextInt(100));
        }
    }
}
