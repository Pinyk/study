package com.six;
//定义抽象方法并覆写
enum Color {
    RED("红色"){
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
    public abstract String getTitle();
}
