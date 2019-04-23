package com.fxthree;

class Message<T extends Number> {
    private T msg;
    public void setMsg(T msg){
        this.msg=msg;
    }
    public T getMsg(){
        return msg;
    }
}
