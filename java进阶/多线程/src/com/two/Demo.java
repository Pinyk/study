package com.two;

public class Demo {
    public static void main(String[] args) {
        String name = "线程对象";
        new Thread(()->{
            for(int x=0;x<200;x++){
                System.out.println(name+"-->"+x);
            }
        }).start();
    }
}
