package com.fx;

public class Mainnn {
    public static void main(String[] args) {
        Point p = new Point();
        p.setX("东经100度");//发生了向上转型
        p.setY("北纬20度");
        String x = (String) p.getX();//发生了向下转型
        String y = (String) p.getY();
        System.out.println("x坐标："+x+",y坐标："+y);
    }
}
