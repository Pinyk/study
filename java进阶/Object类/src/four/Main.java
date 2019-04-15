package four;

public class Main {
    public static void main(String[] args) {
        A a = new B();
        Object obj = a;//向上转型
        A t = (A)obj;//向下转型
        t.fun();
        System.out.println(t);
    }
}
