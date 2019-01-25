package ke;
//字符串分割
public class thirtythree {
    public static void main(String args[])
    {
        String str="192.168.0.1";
        String[] firstArray=str.split("\\.");
        String[] secondArray=str.split("\\.",2);
        System.out.println("str的原值为：["+ str +"]");
        System.out.println("全部分割的结果：");
        for(String a:firstArray){
            System.out.println("["+ a +"]");
        }
        System.out.println();
        System.out.println("分割两次的结果为：");
        for(String a:secondArray){
            System.out.println("["+ a +"]");
        }

    }
}
