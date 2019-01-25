package words;
//替换数组中的元素//lad 男孩
import java.util.Arrays;
public class lad{
    public static void main(String[] args)
    {
        int arr[]=new int[]{45,12,2,10};
        Arrays.fill(arr,1,2,8);
        for(int i=0;i<arr.length;i++){
            System.out.println("第"+i+"个元素是"+arr[i]);
        }
        System.out.println();
        Arrays.fill(arr,1,3,0);
        for(int i=0;i<arr.length;i++){
            System.out.println("第"+i+"个元素是"+arr[i]);
        }
    }
}
//如果索引越界  程序直接报错