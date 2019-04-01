package list;

public class Main {
    public static void main(String[] args) {
        Node root=new Node("火车头");
        Node n1=new Node("火车厢A");
        Node n2=new Node("火车厢B");
        root.setNext(n1);
        n1.setNext(n2);
        Node currentNode=root;
        while(currentNode!=null){
            System.out.println(currentNode.getData());
            currentNode=currentNode.getNext();
        }
    }
}
