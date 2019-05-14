package com.one;
//自动类型转化与强制类型转化

public class TypeConversion {
    public static void main(String[] args) {
        byte b = 127;
        char c = 'w';
        short s = 23561;
        int i = 3333;
        long l = 4000000L;
        float f = 3.1415926F;
        double d = 54.111;
        //低类型向高类型自动转换
        System.out.println("累加byte等于："+b);
        System.out.println("累加char等于："+(b+c));
        System.out.println("累加short等于："+(b+c+s));
        System.out.println("累加int等于："+(b+c+s+i));
        System.out.println("累加long等于："+(b+c+s+i+l));
        System.out.println("累加float等于："+(b+c+s+i+l+f));
        System.out.println("累加double等于："+(b+c+s+i+l+f+d));
        //高类型向低类型强制转化会丢失数据
        System.out.println("把long转换成int型："+(int) l);
        System.out.println("把long转换成short型："+(short) l);
        System.out.println("把double转换成int型："+(int) d);
        System.out.println("把short转换成char型："+(char) s);
    }
}
