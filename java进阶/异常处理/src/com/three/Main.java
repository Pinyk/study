package com.three;

public class Main {
    public static void main(String[] args) {
        try{//div方法中抛出异常，必须明确进行异常处理
            System.out.println(A.div(10,2));
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
