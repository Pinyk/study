package one;

public class Mainn {
    public static void main(String[] args) {
        A a=new B();//必须先向上转型才可以向下转型
        B b=(B) a;//向下转型 强制
        b.print();
    }
}
