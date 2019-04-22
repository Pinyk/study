package com.two;
import static com.two.A.*;
//将A中全部的static方法导入本程序中，这样主方法就可以不使用类名称来调用了
public class Mainn {
    public static void main(String[] args) {
        System.out.println(add(10,20));//不用A.add调用
        System.out.println(div(10,20));
    }
}
