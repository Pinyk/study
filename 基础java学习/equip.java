package words;
//用array类中的静态sort方法直接对数组进行排序
import java.util.Arrays;
public class equip {
    public static void main(String[] args)
    {
        int arr[]=new int[]{23,42,12,8};
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}