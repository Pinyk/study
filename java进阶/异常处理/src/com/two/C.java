package com.two;

public class C {
    public static void main(String[] args) {
        System.out.println("开始");
        try{
            int x = Integer.parseInt(args[0]);
            int y = Integer.parseInt(args[1]);
            System.out.println(x/y);
            System.out.println("1111");
        }catch(Exception e){    //可以处理所有异常   不用加其他catch语句
            e.printStackTrace();
        }finally {
            System.out.println("不管是否出现异常都执行");
        }
        System.out.println("结束");
    }
}
