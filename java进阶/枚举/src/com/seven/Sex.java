package com.seven;

enum Sex {
    MALE("男"),FEMALE("女");
    private String title;
    private Sex(String title){
        this.title=title;
    }
    public String toString(){
        return this.title;
    }
}
