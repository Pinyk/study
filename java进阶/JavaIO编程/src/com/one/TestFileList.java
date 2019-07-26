package com.one;

import java.io.File;

public class TestFileList {
    public static void main(String[] args) throws Exception{
        File file = new File("c:"+File.separator);
        if(file.isDirectory()){
            File arr [] = file.listFiles();
            for(int x = 0; x < arr.length; x++){
                System.out.println(arr[x]);
            }
        }
    }
}
