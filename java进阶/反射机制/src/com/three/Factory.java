package com.three;

public class Factory {
    public static Fruit getInstance(String className){
        Fruit f = null;
        try{
            f = (Fruit)Class.forName(className).newInstance();
        }catch(Exception e){}
        return f;
    }
}
