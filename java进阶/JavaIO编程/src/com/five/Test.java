package com.five;

import java.io.File;
import java.io.FileReader;
import java.io.Reader;

public class Test {
    public static void main(String[] args) throws Exception{
        File file = new File("d:"+File.separator+"javafile"+
                File.separator+"1.txt");
        if(file.exists()){
            Reader in = new FileReader(file);
            char data[] = new char[1024];
            int len = in.read(data);
            in.close();
            System.out.println(new String(data,0,len));
        }
    }
}
