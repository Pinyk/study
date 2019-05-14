package com.one;
//从控制台接受数据
import java.util.Scanner;
public class InputCode {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        System.out.println("请输入你的身份证号");
        String line = a.nextLine();//获取用户输入的第一行文本长度
        System.out.println(line.length());
    }
}
