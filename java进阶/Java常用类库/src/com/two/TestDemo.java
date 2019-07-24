package com.two;

public class TestDemo {
    public static void main(String[] args) {
        Runtime a = Runtime.getRuntime();
        Integer sum = 0;
        for(int i = 0; i < 10000; i++){
            sum += i;
        }
        System.out.println(a.maxMemory());
        System.out.println(a.totalMemory());
        System.out.println(a.freeMemory());
        a.gc();
        System.out.println(a.maxMemory());
        System.out.println(a.totalMemory());
        System.out.println(a.freeMemory());//可用空间大小
    }
}
