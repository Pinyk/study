package hire;

public class Emp {
    private int empno;
    private String ename;
    private String job;
    private double sal;
    private double comm;
    private Dept dept;
    private Emp mgr;
    public Emp(int empno,String ename,String job,double sal,double comm){
        this.empno=empno;
        this.ename=ename;
        this.job=job;
        this.sal=sal;
        this.comm=comm;
    }
    public void setMgr(Emp emp) {
        this.empno = empno;
        this.ename = ename;
        this.job = job;
        this.sal = sal;
        this.comm = comm;
    }
    public String getInfo(){
        return "雇员编号："+this.empno+"，姓名："+this.ename+"，职位："+this.job+"，工资："+this.sal+",佣金："+this.comm;
    }
}
