package ke;
//字符串生成器的简单操作
public class forty {
    public static void main(String args[])
    {
        StringBuilder a=new StringBuilder("gaoyuke");
        System.out.println(a);
        //添加东西示例
        a.append("p");
        System.out.println(a);
        //指定位置添加东西示例
        a.insert(7,"nice");
        System.out.println(a);
        //指定位置删除东西
        a.delete(7,12);
        System.out.println(a);

    }
}
