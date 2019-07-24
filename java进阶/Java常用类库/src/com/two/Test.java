package com.two;

public class Test implements Cloneable{
    private String username;
    private Integer password;
    public Test(String username, Integer password) {
        this.username = username;
        this.password = password;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    @Override
    public String toString() {
        return "用户名：" + this.username + "  密码：" + password;
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
