package six;

class Proxy implements Network{
    private Network network;
    public Proxy(Network network){
        this.network=network;
    }
    public void cheak(){
        System.out.println("检查用户是否合格");
    }
    public void browse(){
        this.cheak();
        this.network.browse();
    }
}
