package ke;

public class sixtytwo {
    public static char gaochar(char cha1,char cha2){
        return(char)(cha1+Math.random()*(cha2-cha1+1));
    }
    public static void main(String[] args){
        System.out.println("任意小写字符"+gaochar('a','z'));
        System.out.println("任意大写字符"+gaochar('A','Z'));
        System.out.println("0~9任意数字字符"+gaochar('0','9'));

    }
}
