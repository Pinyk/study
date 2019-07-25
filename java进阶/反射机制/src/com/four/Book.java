package com.four;

public class Book {
    private String name;
    private Integer price;
    public Book(String name,Integer price) {
        this.price = price;
        this.name = name;
    }

    @Override
    public String toString() {
        return "书名：" + this.name + "  价格：" + this.price;
    }
}
