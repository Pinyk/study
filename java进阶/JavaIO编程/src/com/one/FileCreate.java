package com.one;

import java.io.File;
import java.io.IOException;

public class FileCreate {
    public static void main(String[] args) throws IOException {
        File file = new File("D:\\12306.txt");
        if(file.exists()){
            file.delete();
        }else{
            System.out.println(file.createNewFile());
        }
    }
}
