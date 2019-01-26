package words;
//在某个范围内查找数组
import java.util.Arrays;
public class distribution {
        public static void main(String[] args)
        {
            int a[]=new int[]{1,8,9,4,5};
            Arrays.sort(a);
            int index=Arrays.binarySearch(a,1,3,4);
            System.out.println("4的索引位置是"+index);
        }
    }
