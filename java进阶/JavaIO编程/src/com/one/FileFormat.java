package com.one;

import java.io.File;
import java.text.SimpleDateFormat;
import java.util.Date;

public class FileFormat {
    public static void main(String[] args) throws Exception{
        File file = new File("d:"+File.separator+"书名.txt");
        if(file.exists()){
            System.out.println("是否是文件：" + file.isFile());
            System.out.println("是否是目录：" + file.isDirectory());
            System.out.println("文件大小："
                    + ((double)file.length() / 1024) +"kb");
            System.out.println("上次修改日期;"
                    + new SimpleDateFormat("yyyy-MM-dd HH:mm:ss")
                    .format(new Date(file.lastModified())));
        }
    }
}
