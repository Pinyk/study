package hire;

public class Main {
    public static void main(String[] args){
        Dept dept=new Dept(10,"ACCOUNTING","NEWYORK");
        Emp ea=new Emp(7369,"SMJJ","FFF",800,0.0);
        Emp eb=new Emp(7360,"SJJ","FF",500,0.0);
        Emp ec=new Emp(7365,"SMJ","F",200,0.0);
        ea.setMgr(eb);
        eb.setMgr(ec);
    }
}
