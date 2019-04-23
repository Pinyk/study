package com.fxtwo;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<String> list = new ArrayList<String>();
        list.add("jdkqhad");
        list.add("adad");
        for(int i=0;i<list.size();i++){
            String name=list.get(i);
            System.out.println("name:"+name);
        }
    }
}