package accessingprivateproperties;
//可以通过对象传递类的方式访问私有属性
public class Main {
    public static void main(String[] args){
        Info b=new Info();
        b.fun(b);
        b.print();
    }
}
