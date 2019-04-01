package ke;
//字符串生成器与传统创建字符串的效率比较
public class thirtynine {
    public static void main(String args[])
    {
        String str="";
        long starTime=System.currentTimeMillis();
        for(int i=0;i<50000;i++){
            str=str+1;
        }
        long endTime=System.currentTimeMillis();
        long time=endTime-starTime;
        System.out.println("String消耗时间："+time);
        StringBuilder builder=new StringBuilder("");
        starTime=System.currentTimeMillis();
        for(int j=0;j<50000;j++){
            builder.append(j);
        }
        endTime=System.currentTimeMillis();
        time=endTime-starTime;
        System.out.println("Stringbuilder消耗时间："+time);
    }
}
//字符串生成器消耗时间为什么为0？？？