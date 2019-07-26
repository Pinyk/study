package com.four;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        File file = new File("d:"+File.separator+"javafile"
                +File.separator+"1.txt");
        if(file.exists()){
            InputStream a = new FileInputStream(file);
            byte data[] = new byte[1024];
            int len = a.read(data);
            System.out.println("返回："+len);
            a.close();
            System.out.println("["+new String(data,0,len)+"]");
        }
    }
}
