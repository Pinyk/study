package com.one;

class MyThread extends Thread{
    private String name;

    public MyThread(String name) {
        this.name = name;
    }

    @Override
    public void run(){
        for(int x=0;x<200;x++){
            System.out.println(this.name+"-->"+x);
        }
    }
}
