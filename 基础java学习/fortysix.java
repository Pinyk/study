package ke;
import java.text.DecimalFormat;
public class fortysix {
    public static void main(String[] args){
        DecimalFormat myFormat=new DecimalFormat();
        myFormat.setGroupingSize(2);
        String output=myFormat.format(123456.789);
        System.out.println("将数字以每两个数字进行分组"+output);
        myFormat.setGroupingUsed(false);//如果参数设置为true 则相当于以上面两个两个来分
        String output1=myFormat.format(123456.789);
        System.out.println("不允许数字分组"+output1);
    }
}
