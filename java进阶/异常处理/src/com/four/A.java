package com.four;

public class A {
    public static void main(String[] args){
        try{// 直接抛出一个自定义的异常类对象
            throw new Exception("自己定义异常");
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
