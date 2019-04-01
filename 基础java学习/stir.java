package words;
//当需要查找的元素在范围里没有 则返回需要查找的值本来应该出现位置索引的相反数
import java.util.Arrays;
public class stir {
    public static void main(String[] args)
    {
        int a[]=new int[]{1,8,9,4,5};
        Arrays.sort(a);
        int index=Arrays.binarySearch(a,0,1,7);
        System.out.println("4的索引位置是"+index);//7应该出现在第二个位置所以返回-2
    }
}
