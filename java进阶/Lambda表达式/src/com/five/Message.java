package com.five;

@FunctionalInterface
interface IMessage {
    public int add(int ... args);
    static int sum(int ... args){
        int sum = 0;
        for(int temp:args){
            sum+=temp;
        }
        return sum;
    }
}
