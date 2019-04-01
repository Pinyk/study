package statick;
//利用静态块对static进行初始化
public class Initialize {
    static String msg;
    public Initialize(){
        System.out.println("[a]的构造方法");
    }
    {
        System.out.println("[b]的构造块");
    }
    static{
        msg="Hello".substring(0,2);
        System.out.println("[c]的静态块");
    }
}
