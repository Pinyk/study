package ke;
//当i为静态变量时，即使使用两个对象对同一个静态变量操作  i的值仍然会改变
public class fortyfour {
    static int i=47;
    public void call()
    {
        System.out.println("调用call方法");
        for(i=0;i<3;i++){
            System.out.print(i+" ");
            if(i==2){
                System.out.println("\n");
            }
        }
    }
    public fortyfour(){
    }
    public static void main(String[] args)
    {
        fortyfour t1=new fortyfour();
        fortyfour t2=new fortyfour();
        t2.i=60;
        System.out.println("使用第一个实例对象调用i的结果："+t1.i);
        t1.call();//此时i变为3
        System.out.println("使用第二个实例对象的结果："+t2.i);
        t2.call();
    }
}
