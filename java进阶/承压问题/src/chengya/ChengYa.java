package chengya;
import java.util.Arrays;
import java.util.Scanner;
public class ChengYa {
        public static void main(String[] args) {
            Scanner in=new Scanner(System.in);
            long cou=1;
            for(int i=0;i<29;i++) {
                cou*=2;
            }
            long[][] arr=new long[30][30];
            for(int i=0;i<29;i++) {
                for(int j=0;j<=i;j++) {
                    long a=in.nextLong();
                    arr[i][j]=a*cou;
                }
            }
            for(int i=0;i<29;i++) {
                for(int j=0;j<=i;j++) {
                    long a=arr[i][j]/2;
                    arr[i+1][j]+=a;
                    arr[i+1][j+1]+=a;
                }
            }
            Arrays.sort(arr[29]);
            System.out.println(arr[29][0]+" "+arr[29][29]);
        }
}
