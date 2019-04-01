package definition;

public class Book {
    private String title;
    private double price;
    static String pub="清华大学出版社";
    public Book(String title,double price){
        this.price=price;
        this.title=title;
    }
    public String getInfo(){
        return "图书名称："+this.title+"价格："+this.price+"出版社："+this.pub;
    }
}
