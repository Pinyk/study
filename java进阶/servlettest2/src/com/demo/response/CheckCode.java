package com.demo.response;

import javax.imageio.ImageIO;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.Random;

@WebServlet("/checkcode")
public class CheckCode extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doPost(req, resp);
    }
    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        int width = 100;
        int heigh = 50;
        //创建一对象，在内存中的图片
        BufferedImage image = new BufferedImage(width,heigh,BufferedImage.TYPE_INT_RGB);

        //填充背景色
        Graphics g = image.getGraphics();//画笔对象
        g.setColor(Color.PINK);//设置画笔颜色
        g.fillRect(0,0,width,heigh);

        //画边框
        g.setColor(Color.BLUE);
        g.drawRect( 0,0,width - 1,heigh - 1);

        String str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

        //将数字保存
        StringBuffer sb = new StringBuffer();

        Random ran = new Random();
        for(int i = 1; i <= 4; i++){
            int index = ran.nextInt(str.length());
            char ch = str.charAt(index);
            g.drawString(ch + "",width/5*i,heigh/2);
            sb.append(ch);
        }

        //画干扰线
        g.setColor(Color.GREEN);
        for(int i=0; i < 10; i++){
            int x1 = ran.nextInt(width);
            int x2 = ran.nextInt(width);
            int y1 = ran.nextInt(heigh);
            int y2 = ran.nextInt(heigh);
            g.drawLine(x1, x2, y1, y2);
        }
        req.setAttribute("piccode",sb.toString());
        ImageIO.write(image, "jpg", resp.getOutputStream());
    }
}