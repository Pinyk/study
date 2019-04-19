package com.five;

public class Main {
    public static void main(String[] args) {
        try{
            System.out.println(A.div(10,0));
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
