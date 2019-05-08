package com.four;

@FunctionalInterface
interface IMessage<C> {
    public C create(String t,double p);
}
