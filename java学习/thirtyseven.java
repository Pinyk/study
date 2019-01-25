package ke;
//常规类型格式化
public class thirtyseven {
    public static void main(String args[])
    {
        String a=String.format("%d",400/2);
        String b=String.format("%b",3>5);
        String c=String.format("%x",200);
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
