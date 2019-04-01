package words;
//根据索引截取数组  左索引可取0到数组长度  如果超出程序直接出错   右索引若超出，则超出部分补0
import java.util.Arrays;
public class fasten {
    public static void main(String[] args) {
        int arr[] = new int[]{23, 42, 12, 84, 10};
        int newarr[] = Arrays.copyOfRange(arr, 0, 3);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        System.out.println();
        for (int i = 0; i < newarr.length; i++) {
            System.out.println(newarr[i]);
        }
    }
}
