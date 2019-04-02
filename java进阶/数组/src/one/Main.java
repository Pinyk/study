package one;

public class Main {
    public static void main(String[] args) {
        SortArray arr=new SortArray(3);
        System.out.print(arr.add(20)+"、");
        System.out.print(arr.add(10)+"、");
        System.out.print(arr.add(30)+"、");
        System.out.println(arr.add(100)+"、");
        int[] temp=arr.getData();
        for(int x=0;x<temp.length;x++){
            System.out.print(temp[x]+"、");
        }
    }
}
