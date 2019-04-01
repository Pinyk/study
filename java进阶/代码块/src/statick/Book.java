package statick;

public class Book {
    public Book(){
        System.out.println("[A]Book类的构造方法");
    }
    {
        System.out.println("[B]Book类的构造方法");
    }
    static {//静态块   调用时会优先调用
        System.out.println("[C]Book类的构造方法");
    }
}
