package com.ten;

import java.io.InputStream;

public class DemoOne {
    public static void main(String[] args) throws Exception{
        InputStream input = System.in;
        byte data[] = new byte[1024];
        System.out.print("请输入数据");
        int len = input.read(data);
        System.out.print("输入的数据为：" + new String(data,0,len));
    }
}
