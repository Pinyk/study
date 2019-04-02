package two;

class B extends A{
    int info=100;
    public void print(){
        System.out.println(super.info);
        System.out.println(this.info);
    }
}
