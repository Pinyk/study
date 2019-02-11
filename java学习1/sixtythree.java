package ke;

public class sixtythree {
    private static sixtythree ourInstance = new sixtythree();

    public static sixtythree getInstance() {
        return ourInstance;
    }

    private sixtythree() {
    }
}
