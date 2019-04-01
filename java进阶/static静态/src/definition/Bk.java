package definition;

public class Bk {
    private String title;
    private static int num=0;
    public String getTitle() {
        return this.title;
    }
    public Bk(){
        this("NOTITLE-"+ num ++);
    }
    public Bk(String title){
        this.title=title;
    }
}
