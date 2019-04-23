package com.fxone;

class Point<T>{   //定义坐标 ，Type简写  是一个类型标记
    private T x;
    private T y;
    public void setX(T x){
        this.x=x;
    }
    public void setY(T y){
        this.y=y;
    }
    public T getX(){
        return x;
    }
    public T getY(){
        return y;
    }
}
