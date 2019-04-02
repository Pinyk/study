package one;

class SortArray extends Array{
    public SortArray(int len){
        super(len);
    }
    public int[] getData(){
        java.util.Arrays.sort(super.getData());
        return super.getData();
    }
}
