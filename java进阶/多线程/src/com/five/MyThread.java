package com.five;

import java.util.concurrent.Callable;

class MyThread implements Callable<String> {
    private int ticket = 10;
    @Override
    public String call() throws Exception{
        for(int x = 0; x<100; x++){
            if(this.ticket>0){
                System.out.println("买票，ticket="+this.ticket--);
            }
        }
        return "票已卖光";
    }
}
