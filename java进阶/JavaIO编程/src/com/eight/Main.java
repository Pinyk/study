package com.eight;

import java.io.File;
import java.io.FileOutputStream;

public class Main {
    public static void main(String[] args) throws Exception{
        PrintUtil pu = new PrintUtil(new FileOutputStream("d:"+ File.separator
        +"javafile"+File.separator+"1.txt"));
        pu.print("哈哈哈");
        pu.println("www");
        pu.println(1+1);
        pu.println(1.1+1.1);
        pu.close();
    }
}
