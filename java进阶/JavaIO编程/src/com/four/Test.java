package com.four;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;

public class Test {
    public static void main(String[] args) throws Exception{
        File file = new File("d:" + File.separator +
                "javafile" + File.separator + "1.txt");
        if(file.exists()){
            InputStream a = new FileInputStream(file);
            byte data [] = new byte[1024];
            int foot = 0;
            int temp = 0;
            while((temp = a.read()) != -1){
                data[foot++] = (byte)temp;
            }
            a.close();
            System.out.println("[" + new String(data,0,foot) + "]");
        }
    }
}
