
package definition;
public class Main {
    public static void main(String[] args){
        Book ba=new Book("java开发",20);
        Book bb=new Book("oracle开发",10);
        System.out.println(ba.getInfo());
        System.out.println(bb.getInfo());
        ba.pub="北大出版社";
        System.out.println(ba.getInfo());
        System.out.println(bb.getInfo());
    }
}