package com.four;

enum Color implements Message{
    RED("红色"),GREEN("绿色"),BLUE("蓝色");
    private String title;
    private Color(String title){
        this.title=title;
    }
    public String getTitle(){
        return this.title;
    }
    public String toString(){
        return this.title;
    }
}
