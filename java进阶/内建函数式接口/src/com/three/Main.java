package com.three;
//供给型接口     不接收参数  可以有返回值

import java.util.function.Supplier;
public class Main {
    public static void main(String[] args) {
        Supplier<String> sup = "gao"::toUpperCase;
        System.out.println(sup.get());
    }
}
