package two;

public class Main {
    public static void main(String[] args) {
        X x=new X();
        A a=x;
        B b=x;
        C c=x;
        a.print();
        b.get();
        c.change();
    }
}
