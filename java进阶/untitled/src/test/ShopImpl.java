package test;

public class ShopImpl implements Shop {
    public ShopImpl(int x) {
        this.x = x;
    }
    public ShopImpl() {
    }

    private int x;

    public int getX() {
        return x;
    }

    public void buy(){
        System.out.printf("123");
    }
    public void sel(){
        System.out.printf("456");
        System.out.println("");
        System.out.printf("");
    }
}

