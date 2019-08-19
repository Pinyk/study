package com.demo.request;


import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.util.Enumeration;
import java.util.Map;
import java.util.Set;
//获取请求参数的通用方法

//对get和post通用  所以只有书写任意一个其中的方法即可  另一个中加
//例如 加doPost中加    this.doGet(req,resp);
@WebServlet("/pink1")
public class RequestDemoFour extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String name = req.getParameter("username");
//        System.out.println("get");
//        System.out.println(name);

        String[] hobby = req.getParameterValues("hobby");
//        for(String a : hobby){
//            System.out.println(a);
//        }

        Enumeration<String> par = req.getParameterNames();
//        while(par.hasMoreElements()){
//            String name1 = par.nextElement();
//            System.out.println(name1);
//            String value = req.getParameter(name1);
//            System.out.println(value);
//            System.out.println("----------------------");
//        }

        Map<String, String[]> a = req.getParameterMap();
        Set<String> keyset = a.keySet();
        for(String name3 : keyset){
            String[] values = a.get(name3);
            System.out.println(name3);
            for(String value : values){
                System.out.println(value);
            }

            System.out.println("---------");
        }
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
//        String name = req.getParameter("username");
//        System.out.println("post");
//        System.out.println(name);

        req.setCharacterEncoding("UTF-8");
        this.doGet(req,resp);
    }
}
