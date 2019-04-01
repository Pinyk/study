package definition;

public class Bok {
    private static int num;
    public Bok(){
        num++;
        System.out.println("这是第"+num+"个产生的对象");
    }
}
