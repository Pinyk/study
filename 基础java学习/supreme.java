package words;
//类的两种构造方法
public class supreme {
    public supreme()
    {
        this("this 调用有参构造方式");
        System.out.println("无参构造方法");
    }
    public supreme(String name)
    {
        System.out.println("有参构造方式");
    }
}
