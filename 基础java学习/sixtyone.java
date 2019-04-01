package ke;

public class sixtyone {
    public static int gao(double num1,double num2){
        int s=(int)num1+(int)(Math.random()*(num2-num1));
        if(s%2==0){
            return s;
        }
        else{
            return s+1;
        }
    }
    public static void main(String[] args){
        System.out.println("任意一个2~32之间的偶数："+gao(2,32));
    }
}
