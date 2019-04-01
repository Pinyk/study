package lista;

public class Node {
    private String data;
    private Node next;
    public Node(String data){
        this.data=data;
    }
    public void setNext(Node next){
        this.next=next;
    }
    public Node getNext(){
        return this.next;
    }
    public String getData(){
        return this.data;
    }
    public void addNode(Node newNode){
        if(this.next==null){
            this.next=newNode;
        }else{
            this.next.addNode(newNode);
        }
    }
    public void printNode(){
        System.out.println(this.data);
        if(this.next!=null){
            this.next.printNode();
        }
    }
}
