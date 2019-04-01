package com.myself;
//使用this关键字
class Book{
    private String title;
    private double price;
    public Book(String title,double price){
        this.title=title;
        this.price=price;
    }
    public String getInfo(){
        return "书名："+title+",价格:"+price;
    }
}
public class TextDemo {
    public static void main(String[] args){
        Book book = new Book("Java开发",89.2);
        System.out.println(book.getInfo());
    }
}
