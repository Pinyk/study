package ke;
//正则表达式的匹配
public class thirtyeight {
    public static void main(String args[])
    {
        String regex="\\w+@\\w+(\\.\\w{2,3})*\\.\\w{2,3}";
        String a="aaa@";
        String b="aaaaa";
        String c="1111@111ffyu.dfg.com";
        if(a.matches(regex)){
            System.out.println(a+"是一个合法的E-mail地址格式");
        }
        if(b.matches(regex)){
            System.out.println(b+"是一个合法的E-mail地址格式");
        }
        if(c.matches(regex)){
            System.out.println(c+"是一个合法的E-mail地址格式");
        }
    }

}
