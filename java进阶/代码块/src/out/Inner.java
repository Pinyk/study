package out;

public class Inner {
    private Outer out;
    public Inner(Outer out){
        this.out=out;
    }
    public void print(){
        System.out.println(this.out.getMsg());
    }
}
