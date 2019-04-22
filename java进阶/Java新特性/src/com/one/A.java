package com.one;
//可变参数
public class A {
    public static void main(String[] args) {
        System.out.println(add(new int[]{1,2,3}));
        System.out.println(add(new int[]{1,2}));
    }
    public static int add(int [] data){
        int sum=0;
        for(int x=0;x<data.length;x++){
            sum+=data[x];
        }
        return sum;
    }
}
