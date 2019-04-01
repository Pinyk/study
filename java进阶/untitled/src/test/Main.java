package test;

public class Main {
    public static void main(String args[]){
            ShopImpl shop=new ShopImpl();
            shop.buy();
            shop.sel();
        System.out.println(shop.getX());
    }
}
