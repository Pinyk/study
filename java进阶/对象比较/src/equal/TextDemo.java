package equal;

public class TextDemo {
    public static void main(String[] args){
        Book b1=new Book("java开发",20);
        Book b2=new Book("java开发",20);
        if(b1.getTitle().equals(b2.getTitle()) && b1.getPrice()==b2.getPrice()){
            System.out.println("是同一个对象");
        }else{
            System.out.println("不是同一个对象");
        }
    }
}
