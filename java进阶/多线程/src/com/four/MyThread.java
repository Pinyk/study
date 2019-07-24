package com.four;

class MyThread implements Runnable{
    private int ticket = 5;
    @Override
    public void run(){
        for(int x = 0;x < 50;x++){
            if(this.ticket>0){
                System.out.println("卖票，ticket="+this.ticket--);
            }
        }
    }
}
