package accessingprivateproperties;

public class Info {
    private String a="hello";
    public void print(){
        System.out.println(a);
    }
    public void fun(Info temp){
        temp.a="world";
    }
}
