package com.eight;

public class MyThread implements Runnable{
    private boolean flag = true;
    @Override
    public void run() {
        int i = 0;
        while(this.flag){
            while(true)
            {
                System.out.println(Thread.currentThread().getName()+"运行，i ="
                        +(i++));
            }
        }
    }

    public void stop(){
        this.flag = false;
    }
}
