package com.two;

public class Main {
    public static void main(String[] args) throws Exception {
        Test a = new Test("pink",20);
        Test b = (Test) a.clone();
        b.setUsername("pinyk");
        System.out.println(a);
        System.out.println(b);
    }
}
