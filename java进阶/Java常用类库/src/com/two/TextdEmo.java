package com.two;

class Human{
    public Human() {
        System.out.println("出生");
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("存活");
        throw new Exception("此处即抛出异常 对象也不会产生影响");
    }
}

public class TextdEmo {
    public static void main(String[] args) {
        Human a = new Human();
        a = null;
        System.gc();
    }
}
