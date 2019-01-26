package words;
//数组的查询
import java.util.Arrays;
public class software {
    public static void main(String[] args)
    {
        int a[]=new int[]{1,8,9,4,5};
        Arrays.sort(a);
        int index=Arrays.binarySearch(a,4);
        System.out.println("4的索引位置是"+index);
    }
}
