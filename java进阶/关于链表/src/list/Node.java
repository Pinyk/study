package list;

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
    public void setData(String data){
        this.data=data;
    }
    public String getData(){
        return this.data;
    }
}
