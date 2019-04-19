package com.seven;

public class Main {
    public static void main(String[] args) {
        int num=20;
        try{
            if(num>10){
                throw new AddException("数值传递过大");
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
