package com.four;

public class Main {
    public static void main(String[] args) {
        IMessage<Book> msg = Book :: new;
        Book book = msg.create("java开发",20);
        System.out.println(book);
    }
}
