package com.soft.one;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import sun.net.www.protocol.http.HttpURLConnection;


public class one {
    public static void main(String[] args){
        String r;
//1.新建url对象，表示要访问的网页
        try {
            URL url = new URL("http://jyc.xiyou.edu.cn/index/jxglxtrk.htm");
//2.建立http连接,返回连接对象urlconnection
            HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
//3.获取相应的http状态码，
            int responseCode= urlConnection.getResponseCode();
//4.如果获取成功，从URLconnection对象获取输入流来获取请求网页的源代码
            if(responseCode == 200){
                BufferedReader reader = new BufferedReader(new InputStreamReader(urlConnection.getInputStream(), "utf-8"));
                while((r=reader.readLine())!=null){
                    System.out.println(r);
                }
            }else{
                System.out.println("获取不到源代码 ，服务器响应代码为："+responseCode);
            }
        } catch (Exception e) {
            System.out.println("获取不到网页源码："+e);
        }
    }
}
