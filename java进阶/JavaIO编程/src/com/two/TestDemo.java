package com.two;

public class TestDemo {
    public static void main(String[] args) {
        try(Net net = new Net()){
            net.info();
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
