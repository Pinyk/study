package com.seven;

import java.io.*;

public class FileCopyTest {
    public static void main(String[] args) throws Exception{
        long start = System.currentTimeMillis();
        if(args.length!=2){
            System.out.println("命令执行错误");
            System.exit(1);
        }

        File inFile = new File(args[0]);
        if(!inFile.exists()){
            System.out.println("源文件不存在，请确认路径");
            System.exit(1);
        }

        File outFile = new File(args[1]);
        if(!outFile.getParentFile().exists()){
            outFile.getParentFile().mkdir();
        }

        InputStream input = new FileInputStream(inFile);
        OutputStream output = new FileOutputStream(outFile);
        int temp = 0;
        byte data[] = new byte[1024];
        while((temp = input.read(data))!=-1){
            output.write(data,0,temp);
        }
        input.close();
        output.close();
        long end = System.currentTimeMillis();
        System.out.println("所花费时间：" + (end-start));
    }
}
