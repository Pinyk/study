package four;

public class Main {
    public static void main(String[] args) {
        Computer com = new Computer();
        com.plugin(new Flash());
        com.plugin(new Print());
    }
}
