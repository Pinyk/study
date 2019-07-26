package com.threee;

import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStream;

public class TestDemo {
    public static void main(String[] args) throws Exception {
        File file = new File("d:"+File.separator+"javafile"
                +File.separator + "1.txt");
        if(!file.getParentFile().exists()){
            file.getParentFile().mkdir();
        }
        OutputStream a = new FileOutputStream(file);//单个直接覆盖
        //OutputStream a = new FileOutputStream(file,true);追加时使用
        String str = "#%&*";
        byte data [] = str.getBytes();
        a.write(data,0,4);
        a.close();
    }
}
