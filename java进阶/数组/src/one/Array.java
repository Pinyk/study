package one;

class Array {
    private int data[];
    private int foot;
    public Array(int len){
        if(len>0){
            this.data=new int[len];
        }else{
            this.data=new int[1];
        }
    }
    public boolean add(int num){
        if(this.foot<this.data.length){
            this.data[this.foot++]=num;
            return true;
        }
        return false;
    }
    public int[] getData(){
        return this.data;
    }
}
