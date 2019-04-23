package com.fxone;

public class Main {
    public static void main(String[] args) {
        Point<String> p = new Point<String>();
        p.setX("东经100度");
        p.setY("北纬20度");
        String x = p.getX();
        String y = p.getY();
        System.out.println("x坐标："+x+"，y坐标："+y);
    }
}
