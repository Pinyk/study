package com.ten;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

public class DemoThree {
    public static void main(String[] args) throws Exception{
        File file = new File("d:"+File.separator+"javafile"+
                File.separator+"1.txt");
        BufferedReader buf = new BufferedReader(new FileReader(file));
        String str = null;
        while((str = buf.readLine())!=null){
            System.out.println(str);
        }
        buf.close();
    }
}
