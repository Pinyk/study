package six;

public class Main {
    public static void main(String[] args) {
        Network net=null;
        net=new Proxy(new Real());
        net.browse();
    }
}
