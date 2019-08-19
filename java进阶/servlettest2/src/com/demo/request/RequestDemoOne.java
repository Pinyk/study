package com.demo.request;


import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

@WebServlet("/requestDemo1")
public class RequestDemoOne extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String method = req.getMethod();
        System.out.println("获取请求方式："+method);

        String contextPath = req.getContextPath();
        System.out.println("获取虚拟目录："+contextPath);

        String servletPath = req.getServletPath();
        System.out.println("获取servlet路径：" + servletPath);

        String querySttring = req.getQueryString();
        System.out.println("获取Get方式的请求参数：" + querySttring);

        String requestURI = req.getRequestURI();
        StringBuffer requestURL = req.getRequestURL();
        System.out.println("获取请求的URI：" + requestURI);
        System.out.println("获取请求的URL：" + requestURL);

        String conprotocol = req.getProtocol();
        System.out.println("获取版本号：" + conprotocol);

        String add = req.getRemoteUser();
        System.out.println("获取客户机的IP地址：" + add);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //super.doPost(req, resp);
    }
}
