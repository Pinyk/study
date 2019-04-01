package com.myself;

class Member {
    private int mid;
    private String name;
    private Car car;
    public Member(int mid,String name){
        this.mid=mid;
        this.name=name;
    }
    public void setCar(Car car){
        this.car=car;
    }
    public Car getCar(){
        return this.car;
    }
    public String getInfo(){
        return "人员编号："+this.mid+"，姓名："+this.name;
    }
}
