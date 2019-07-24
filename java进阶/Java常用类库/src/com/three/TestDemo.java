package com.three;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        long starttime = System.currentTimeMillis();
        Integer sum = 0;
        for(int i = 0; i < 100000; i++){
            sum += i;
        }
        long endtime = System.currentTimeMillis();
        System.out.println("花费时间："+(endtime-starttime));
    }
}
