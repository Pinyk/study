package com.myself;

class Car {
    private Member member;
    private String pname;
    public Car(String pname){
        this.pname=pname;
    }
    public void setMember(Member member){
        this.member=member;
    }
    public Member getMember(){
        return this.member;
    }
    public String getInfo(){
        return "车的名字："+this.pname;
    }
}
