package equal;

public class Book {
    private String title;
    private double price;
    public Book(String title,double price){
        this.price=price;
        this.title=title;
    }
    public String getTitle(){
        return this.title;
    }
    public double getPrice(){
        return this.price;
    }
}
