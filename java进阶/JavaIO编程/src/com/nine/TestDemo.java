package com.nine;

import java.io.File;
import java.io.FileOutputStream;
import java.io.PrintStream;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        PrintStream pu = new PrintStream(new FileOutputStream(new File("d:"
        +File.separator+"javafile"+File.separator+"1.txt")));
        pu.print("高宇科");
        pu.println(666);
        pu.println(6.6);
        pu.println("");
        int age = 10;
        pu.printf("%d",age);
        pu.close();
    }
}
