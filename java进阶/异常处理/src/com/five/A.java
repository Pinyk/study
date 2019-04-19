package com.five;

public class A {
    public static int div(int x,int y)throws Exception{
        System.out.println("计算开始");
        int result=0;
        try{
            result=x/y;
        }catch(Exception e){
            throw e;
        }finally{
            System.out.println("计算结束");
        }
        return result;
    }
}
