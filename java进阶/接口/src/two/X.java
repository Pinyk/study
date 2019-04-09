package two;

class X extends C implements A,B{
    public void print(){
        System.out.println("A接口的抽象方法");
    }
    public void get(){
        System.out.println("B接口的抽象方法");
    }
    public void change(){
        System.out.println("C类的抽象方法");
    }
}
