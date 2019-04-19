package com.six;
//assert   断言操作n
//此程序中没有执行断言操作    如需执行需要添加在设置中添加
public class Main {
    public static void main(String[] args) {
        int num = 10;
        assert num == 20:"num内容不是20";
        System.out.println(num);
    }
}
