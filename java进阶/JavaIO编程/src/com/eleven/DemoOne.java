package com.eleven;

import java.util.Scanner;

public class DemoOne {
    public static void main(String[] args) throws Exception{
        Scanner scan = new Scanner(System.in);
        System.out.print("请输入内容:");
        if(scan.hasNext()){
            System.out.println("输入内容：" + scan.next());
        }
        scan.close();
    }
}
