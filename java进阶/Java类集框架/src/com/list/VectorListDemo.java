package com.list;

import java.util.List;
import java.util.Vector;

public class VectorListDemo {
    public static void main(String[] args) {
        List<String> all = new Vector<>();
        System.out.println("长度：" + all.size() +
                " 是否为空：" + all.isEmpty());
        all.add("hello");
        all.add("world");
        all.add("gyk");
        System.out.println("长度：" + all.size() +
                " 是否为空：" + all.isEmpty());
        for(int x = 0; x < all.size(); x++){
            String str = all.get(x);
            System.out.print(str + " ");
        }
    }
}
