package words;

public class assistant {
    public static void main(String[] args)
    {
        String str=Integer.toString(456);
        String str1=Integer.toBinaryString(456);
        String str2=Integer.toHexString(456);
        String str3=Integer.toOctalString(456);
        System.out.println("456的十进制表示为："+str);
        System.out.println("456的二进制表示为："+str1);
        System.out.println("456的十六进制表示为："+str2);
        System.out.println("456的八进制表示为："+str3);
    }

}
