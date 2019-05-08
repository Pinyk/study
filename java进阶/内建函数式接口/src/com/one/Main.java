package com.one;
//消费型接口   接受数据不返回处理结果
import java.util.function.Consumer;
public class Main {
    public static void main(String[] args) {
        Consumer<String> cons = System.out::print;
        cons.accept("高");
    }
}
