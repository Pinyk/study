package com.fx;

public class Mainn {
    public static void main(String[] args) {
        Point p = new Point();
        p.setX(10.2);//发生了向上转型
        p.setY(20.3);
        double x = (Double) p.getX();//发生了向下转型
        double y = (Double) p.getY();
        System.out.println("x坐标："+x+",y坐标："+y);
    }
}
