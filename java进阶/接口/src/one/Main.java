package one;

public class Main {
    public static void main(String[] args) {
        X x=new X();
        A a=x;//向上转型
        B b=x;
        a.print();
        b.get();
        System.out.println(A.MSG);
    }
}
