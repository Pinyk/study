package com.eight;


import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        String str = "www.kkkkkk";
        InputStream input = new ByteArrayInputStream(str.getBytes());
        OutputStream output = new ByteArrayOutputStream();
        int temp = 0;
        while((temp = input.read()) != -1){
            output.write(Character.toUpperCase(temp));
        }
        System.out.println(output);
        input.close();
        output.close();
    }
}
