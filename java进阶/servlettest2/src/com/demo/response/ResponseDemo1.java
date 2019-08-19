package com.demo.response;


import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

@WebServlet("/responseDemo1")
public class ResponseDemo1 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doPost(req,resp);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("demo1......");
        //第一种重定向方法
        //resp.setStatus(302);
        //resp.setHeader("location", "/servlettest2_war_exploded/responseDemo2");
        //第二种 简便方法
        //resp.sendRedirect("/servlettest2_war_exploded/responseDemo2");
        //第三种 先获取虚拟路径
        String path = req.getContextPath();
        resp.sendRedirect(path+"/responseDemo2");
    }
}
