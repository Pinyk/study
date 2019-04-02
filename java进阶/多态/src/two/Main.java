package two;

public class Main {
    public static void main(String[] args) {
        fun(new B());//等价于A a=new B（）；
        fun(new C());
    }
    public static void fun(A a){
        a.print();
    }
}
