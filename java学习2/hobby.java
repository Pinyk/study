package words;
//数组填充替换元素
import java.util.Arrays;
public class hobby {
    public static void main(String[] args)
    {
        int arr[]=new int[5];
        Arrays.fill(arr,8);
        for(int i=0;i<arr.length;i++){
            System.out.println("第"+i+"个元素是"+arr[i]);
        }
    }


}
