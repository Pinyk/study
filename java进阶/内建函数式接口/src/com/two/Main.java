package com.two;
//功能型接口        接受参数并返回一个处理结果
import java.util.function.Function;

public class Main {
    public static void main(String[] args) {
        Function<String,Boolean> fun = "##123" :: startsWith;
        System.out.println(fun.apply("##"));
    }
}
