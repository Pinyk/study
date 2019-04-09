package five;

public class Main {
    public static void main(String[] args) {
        Fruit f=Factory.getInstance("apple");
        f.eat();
    }
}
