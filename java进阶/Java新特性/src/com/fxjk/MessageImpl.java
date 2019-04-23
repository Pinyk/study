package com.fxjk;

import com.sun.xml.internal.ws.wsdl.writer.document.Message;

class MessageImpl<S>implements IMessage<S> {
    public void print(S t){
        System.out.println(t);
    }
}
