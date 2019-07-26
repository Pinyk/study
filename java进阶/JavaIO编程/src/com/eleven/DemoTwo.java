package com.eleven;

import java.util.Scanner;

public class DemoTwo {
    public static void main(String[] args) throws Exception{
        Scanner scan = new Scanner(System.in);
        System.out.println("请输入成绩:");
        if(scan.hasNextDouble()){
            double score = scan.nextDouble();
            System.out.println("输入内容："+score);
        }else{
            System.out.println("error");
        }
        scan.close();
    }
}
