package com.five;

import java.io.File;
import java.io.FileWriter;
import java.io.Writer;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        File file = new File("d:" + File.separator +
                "javafile" + File.separator + "1.txt");
        if(!file.exists()){
            file.getParentFile().mkdir();
        }
        Writer a = new FileWriter(file);
        String str = "123456";
        a.write(str);
        a.close();
    }
}
