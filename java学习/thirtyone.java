package ke;
//字典顺序比较2个字符串
public class thirtyone {
    public static void main(String arags[])
    {
        String str=new String("b");
        String str2=new String("a");
        String str3=new String("c");
        System.out.println(str + "compareTo"+str2+":" + str.compareTo(str2));
        System.out.println(str + "compareTo"+str3+":" + str.compareTo(str3));
    }
}
