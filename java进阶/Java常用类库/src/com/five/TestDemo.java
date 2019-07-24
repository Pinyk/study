package com.five;

import java.util.Arrays;
import java.util.regex.Pattern;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        String str = "helloyootk11mldf22gaos";
        String regex = "\\d+";
        Pattern pattern = Pattern.compile(regex);
        String result[] = pattern.split(str);
        System.out.println(Arrays.toString(result));
    }
}
