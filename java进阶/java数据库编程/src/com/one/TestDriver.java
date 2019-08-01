package com.one;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class TestDriver {
    public static void main(String[] args) {
        System.out.println("success");
        new TestDriver().getCon();
    }

    private Connection getCon() {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/allbooks?&useSSL=false&serverTimezone=UTC";
            String user = "root";
            String password = "GYK1748";
            Connection conn = DriverManager.getConnection(url,user,password);
            if(!conn.isClosed()){
                System.out.println("数据库连接成功");
            }
            Statement stat = conn.createStatement();
            String command = "select * from book";
            ResultSet result = stat.executeQuery(command);

            while(result.next()){
                System.out.println(result.getString(1) + " " +
                        result.getString(2) + " " +
                        result.getString(3));
            }
            result.close();
            return conn;
        }catch (Exception e){
            e.printStackTrace();
            return null;
        }
    }
}
