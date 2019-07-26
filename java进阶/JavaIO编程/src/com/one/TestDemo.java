package com.one;

import java.io.File;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        File file = new File("d:"+File.separator+"javafile"+File.separator+"1.txt");
        if(!file.getParentFile().exists()){
            file.getParentFile().mkdir();
        }else{
            System.out.println(file.createNewFile());
        }
    }
}
