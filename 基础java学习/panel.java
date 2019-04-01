package words;
//反转排序
public class panel {
    public static void main(String[] args)
    {
        int[] array={10,20,30,40,50,60};
        panel sorter=new panel();
        sorter.sort(array);
    }
    public void sort(int[] array)
    {
        System.out.println("原数组的内容：");
        showArray(array);
        int temp;
        int len=array.length;
        for(int i=0;i<len/2;i++){
            temp=array[i];
            array[i]=array[len-1-i];
            array[len-1-i]=temp;
        }
        System.out.println("数组反转后的内容：");
        showArray(array);
    }
    public void showArray(int[] array)
    {
        for(int i:array){
            System.out.print("\t"+i);
        }
        System.out.println();
    }
}
