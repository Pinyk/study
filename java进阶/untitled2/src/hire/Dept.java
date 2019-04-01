package hire;

public class Dept {
    private int deptno;
    private String dname;
    private String loc;
    private Emp emps[];
    public Dept(int deptno,String dname,String loc){
        this.deptno=deptno;
        this.dname=dname;
        this.loc=loc;
    }
    public void setDept(Dept dept){
        this.deptno=deptno;
        this.dname=dname;
        this.loc=loc;
    }
    public String getInfo(){
        return "部门编号："+this.deptno+",名称："+this.dname+",位置："+this.loc;
    }
}
