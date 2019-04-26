package com.five;

enum Color implements IMessage{
    RED("红色"){//匿名内部类实现接口
        public String getTitle(){
            return this+"-red";
        }
    },
    GREEN("绿色"){
        public String getTitle(){
            return this+"-green";
        }
    },
    BLUE("蓝色"){
        public String getTitle(){
            return this+"-blue";
        }
    };
    private String title;
    private Color(String title){
        this.title=title;
    }
    public String toString(){
        return this.title;
    }
}
