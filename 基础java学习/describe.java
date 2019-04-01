package words;
//对象的比较
public class describe {
    public static void main(String[] args)
    {
        String c1=new String("abc");
        String c2=new String("abc");
        String c3=c1;
        System.out.println(c2==c3);//==比较的是对象引用的地址
        System.out.println(c2.equals(c3));//equals比较的是内容
    }
}
