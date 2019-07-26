package com.ten;

import sun.awt.image.BufferedImageDevice;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class DemoTwo {
    public static void main(String[] args) throws Exception{
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("请输入数据");
        String str = buf.readLine();
        System.out.print("输入的内容：" + str);
    }
}
