package com.two;

public class Mainn {
    public static void main(String[] args) {
        for(Color c:Color.values()){//value方法返回enum的所有对象
            System.out.println(c.ordinal()+"-"+c.name());
        }
    }
}
