package equals;

public class Main {
    public static void main(String[] args){
        Book b1=new Book("java开发",20);
        Book b2=new Book("java开发",20);
        if(b1.compare(b2)){
            System.out.println("是一个对象");
        }else{
            System.out.println("不是一个对象");
        }
    }
}
