package com.three;

@FunctionalInterface
interface IMessage<P> {
    public int compare(P p1,P p2);
}
