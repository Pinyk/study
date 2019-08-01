package com.one;

import java.sql.*;

public class FuzzyQueryDemo {
    private static final String dbdriver = "com.mysql.jdbc.Driver";
    private static final String dburl = "jdbc:mysql://localhost:3306/allbooks?" +
            "&useSSL=false&serverTimezone=UTC";
    private static final String user = "root";
    private static final String password = "GYK1748";

    public static void main(String[] args) throws Exception{
        String keyWord = "java";
        Class.forName(dbdriver);
        Connection conn = DriverManager.getConnection(dburl,user,password);

        String sql = "select * from book where bookname like '%java%'";

        Statement stat = conn.createStatement();

        ResultSet rs = stat.executeQuery(sql);

        while(rs.next()){
            System.out.println(rs.getString(1) + " "
            + rs.getString(2));
        }

        stat.close();
        conn.close();
    }
}
