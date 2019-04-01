package words;
//类为关键字static
public class statick {
    public static void main(String[]args)
    {
        int b[][]=new int[][]{{1},{2,3},{4,5,6}};
        for(int k=0;k<b.length;k++){
            for(int c=0;c<b[k].length;c++){
                System.out.print(b[k][c]);
            }
            System.out.println();
        }
    }
}
