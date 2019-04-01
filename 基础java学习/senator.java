package words;
//翻译：参议员//用foreach遍历二维数组
public class senator {
    public static void main(String args[])
    {
        int arr[][]={{4,3},{1,2}};
        System.out.println("数组中的元素是：");
        int i=0;
        for(int x[]:arr){
            i++;
            int j=0;
            for(int e:x){
                j++;
                if(i==arr.length&&j==x.length){
                    System.out.print(e);
               }else
                    System.out.print(e+"、");
            }
        }
    }
}
