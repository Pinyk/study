package ke;

class sixtyeight {
    sixtyeight(){
        System.out.println("调用父类sixtyeight()的构造方法");
    }
}
class sixtyeight1 extends sixtyeight{
    sixtyeight1(){
        System.out.println("调用子类的sixeight1()的构造方法");
    }
}
class sixtyeight2 extends sixtyeight1{
    sixtyeight2(){
        System.out.println("调用子类的sixtyeight2()的构造方法");
    }
    public static void main(String[] arsg)
    {
        sixtyeight2 a=new sixtyeight2();
    }
}
