package words;
//从左边开始截取数组 如果越界补0
import java.util.Arrays;
public class frown {
    public static void main(String[] args)
    {
        int arr[]=new int[]{23,42,12};
        int newarr[]=Arrays.copyOf(arr,5);
        for(int i=0;i<newarr.length;i++){
            System.out.println(newarr[i]);
        }
        System.out.println();
        int newarr1[]=Arrays.copyOf(arr,2);
        for(int i=0;i<newarr1.length;i++){
            System.out.println(newarr1[i]);
        }
    }
}
