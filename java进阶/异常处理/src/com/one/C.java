package com.one;

public class C {
    public static void main(String[] args) {
        System.out.println("开始");
        try{
            System.out.println(10/0);
            System.out.println("1111");
        }catch(ArithmeticException e){    //处理算术异常
            e.printStackTrace();
        }finally {
            System.out.println("不管出不出现异常都执行");
        }
        System.out.println("结束");
    }
}
//对于这个程序来说finally的作用并不大，但是如果对于不能正常处理的代码，即使程序中断
//finally依然会执行
