package ke;
//访问对象的属性和行为
public class fortythree {
    int i=47;
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
    public fortythree(){
    }
    public static void main(String[] args)
    {
        fortythree t1=new fortythree();
        fortythree t2=new fortythree();
        t2.i=60;
        System.out.println("使用第一个实例对象调用i的结果："+t1.i);
        t1.call();
        System.out.println("使用第二个实例对象的结果："+t2.i);
        t2.call();
    }
}
