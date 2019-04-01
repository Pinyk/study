package ke;
import java.math.BigInteger;
public class sixtyfive {
    public static void main(String[] args){
        BigInteger a=new BigInteger("4");
        System.out.println("加法操作："+a.add(new BigInteger("2")));
        System.out.println("减法操作："+a.subtract(new BigInteger("2")));
        System.out.println("乘法操作："+a.multiply(new BigInteger("2")));
        System.out.println("除法操作："+a.divide(new BigInteger("2")));
        System.out.println("取商操作："+a.divideAndRemainder(new BigInteger("3"))[0]);
        System.out.println("取余操作："+a.divideAndRemainder(new BigInteger("3"))[1]);
        System.out.println("做二次方操作："+a.pow(2));
        System.out.println("取相反数操作："+a.negate());
    }
}
