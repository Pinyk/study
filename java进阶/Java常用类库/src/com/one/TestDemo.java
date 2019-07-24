package com.one;

public class TestDemo {
    public static void main(String[] args) throws Exception{
        StringBuffer a = new StringBuffer();
        a.append("gaoyu");
        System.out.println(a);
        change(a);
        System.out.println(a);
    }

    private static void change(StringBuffer a) {
        a.append("ke").append(".......");
    }
}
