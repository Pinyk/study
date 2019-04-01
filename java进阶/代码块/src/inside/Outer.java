package inside;

public class Outer {
    private String msg="Hello";
    class Inner{
        public void print(){
            System.out.println(msg);
        }
    }
    public void fun(){
        new Inner().print();
    }
}
