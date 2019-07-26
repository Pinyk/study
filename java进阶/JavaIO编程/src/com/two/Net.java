package com.two;

public class Net implements AutoCloseable{
    @Override
    public void close() throws Exception {
        System.out.println("11111");
    }

    public void info() throws Exception{
        System.out.println("222");
    }
}
