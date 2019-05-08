package com.four;
//断言型接口    用于判断操作使用

import java.util.function.Predicate;
public class Main {
    public static void main(String[] args) {
        Predicate<String> pre = "hhhh"::equalsIgnoreCase;
        System.out.println(pre.test("hhhh"));
    }
}
