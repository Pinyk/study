package com.three;

public class Book<T> {
    private T title;
    public void setTitle(T title){
        this.title=title;
    }
    public T getTitle(){
        return title;
    }
}
