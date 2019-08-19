package com.demo.servletcontext;


import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.File;
import java.io.IOException;

@WebServlet("/context1")
public class ServletContextDemo1 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doPost(req, resp);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //获取servletContext的两种方式
        ServletContext context1 = req.getServletContext();

        ServletContext context2 = this.getServletContext();

        System.out.println(context1);
        System.out.println(context2);
        System.out.println(context1 == context2);

        //获取MIME类型  互联网通信中定义的一种文件数据类型
        String filename = "a.jpg";
        String mimeType = context1.getMimeType(filename);
        System.out.println(mimeType);

        //获取文件的服务器路径
        String realPath = context1.getRealPath("/b.txt");//访问web目录下的资源问题
        System.out.println(realPath);
        File file = new File(realPath);

        String realPath1 = context1.getRealPath("/WEB-INF/c.txt");
        System.out.println(realPath1);
        File file1 = new File(realPath1);

        String realPath2 = context1.getRealPath("/WEB-INF/classes/a.txt");
        System.out.println(realPath2);
        File file2 = new File(realPath2);
    }
}
