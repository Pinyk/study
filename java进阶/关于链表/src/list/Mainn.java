package list;

public class Mainn {
    public static void main(String[] args) {
        Node root=new Node("火车头");
        Node n1=new Node("车厢A");
        Node n2=new Node("车厢B");
        root.setNext(n1);
        n1.setNext(n2);
        print(root);
    }
    public static void print(Node n){
        if(n==null)
        {
            return;
        }
        System.out.println(n.getData());
        print(n.getNext());
    }
}
