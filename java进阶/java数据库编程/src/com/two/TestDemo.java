package com.two;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.util.Arrays;

public class TestDemo {
    private static final String dbdriver = "com.mysql.jdbc.Driver";
    private static final String dburl = "jdbc:mysql://localhost:3306/allbooks?" +
            "&useSSL=false&serverTimezone=UTC";
    private static final String user = "root";
    private static final String password = "GYK1748";

    public static void main(String[] args) throws Exception{
        Class.forName(dbdriver);

        Connection conn = DriverManager.getConnection(dburl,user,password);

        Statement stat = conn.createStatement();

        stat.addBatch("insert into manager(managername,mpassword) values ('huo','123456')");
        stat.addBatch("insert into manager(managername,mpassword) values ('rui','12345')");
        int result[] = stat.executeBatch();
        System.out.println(Arrays.toString(result));
        conn.close();
    }
}
