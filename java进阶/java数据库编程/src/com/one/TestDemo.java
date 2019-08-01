package com.one;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

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

        //数据库增加数据操作
        //String sql = "INSERT INTO manager(managername,mpassword) VALUES"
       //         + "('hjr','521')";
        //int len = stat.executeUpdate(sql);

        //System.out.println("影响数据行：" + len);


        //数据库修改数据操作
//        String sql1 = "UPDATE manager SET mpassword = '520'"
//                + "WHERE managername = 'hjr'";
//
//        int len = stat.executeUpdate(sql1);
//
//        System.out.println("影响数据行：" + len);

        //对数据库的删除操作
//        String sql = "delete from manager where managername = 'hjr'";
//
//        int len = stat.executeUpdate(sql);
//
//        System.out.println("影响数据行：" + len);

        //修改
//        String sql = "update manager set idmanager = 1 where managername = 'pink'";
//        int len = stat.executeUpdate(sql);
//        System.out.println("影响数据行：" + len);

        //增加
//        String sql = "insert into manager values(2,'hjr','181818')";
//        int len = stat.executeUpdate(sql);
//        System.out.println("影响数据行：" + len);

        //查询1
//        String sql = "select * from manager";
//        ResultSet rs = stat.executeQuery(sql);
//
//        while(rs.next()){
//            System.out.println(rs.getString(1) + " "
//            + rs.getString(2) + " " + rs.getString(3));
//        }

        //查询2
        String sql = "select * from manager";
        ResultSet rs = stat.executeQuery(sql);

        while(rs.next()){
            int id = rs.getInt("idmanager");
            String name = rs.getString("managername");
            String password = rs.getString("mpassword");

            System.out.println(id + " " + name + " " + password);
        }

        stat.close();
        conn.close();
    }
}
