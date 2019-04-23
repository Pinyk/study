package com.tpf;

class Message<T> {
    private T msg;
    public void setMsg(T msg){
        this.msg=msg;
    }
    public T getMsg(){
        return msg;
    }
}
