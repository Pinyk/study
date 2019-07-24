package com.four;

public class Main {
    public static void main(String[] args) throws Exception{
        MyThread a = new MyThread();
        new Thread(a).start();//实现数据共享
        new Thread(a).start();
        new Thread(a).start();
    }
}
