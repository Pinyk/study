package com.six;

import java.io.*;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        File file = new File("d:"+File.separator+"javafile"
                + File.separator + "1.txt");
        if(!file.getParentFile().exists()){
            file.getParentFile().mkdir();
        }
        OutputStream a = new FileOutputStream(file);
        Writer b = new OutputStreamWriter(a);
        b.write("66666");
        b.flush();
        b.close();
    }
}