package com.fxone;

public class Mainn {
    public static void main(String[] args) {
        Point<Integer> p = new Point<Integer>();
        p.setX(20);
        p.setY(10);
        int x=p.getX();
        int y=p.getY();
        System.out.println("x坐标："+x+"，y坐标："+y);
    }
}
