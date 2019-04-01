package out;

public class Outer {
    private String msg="Hello";
    public void fun(){
        new Inner(this).print();
    }
    public String getMsg(){
        return this.msg;
    }
}
