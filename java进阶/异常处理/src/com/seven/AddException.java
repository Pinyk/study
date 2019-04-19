package com.seven;
//自定义异常
class AddException extends Exception{//继承Exception或者RuntimeException父类即可
    public AddException(String msg){
        super(msg);
    }
}
