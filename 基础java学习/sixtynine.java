package ke;

public class sixtynine {
    public String toString(){
        return "在"+getClass().getName()+"类中重写tostring方法";
    }
    public static void main(String[] args){
        System.out.println(new sixtynine());
    }
}
