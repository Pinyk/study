package words;
//调用冒泡排序
public class flexible {
    public static void main(String[] args)
    {
        int[] array={63,4,24,1,3,15};
        flexible sorter=new flexible();
        sorter.sort(array);
    }
    public void sort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            for (int j = 0; j < array.length - i; j++) {
                if(array[j]<array[j+1]){
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
            }
        showArray(array);
    }
    public void showArray(int[] array)
    {
        for(int i:array)
        {
            System.out.print(i+" ");
        }
    }
}