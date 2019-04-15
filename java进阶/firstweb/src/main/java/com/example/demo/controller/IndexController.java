package com.example.demo.controller;

import com.example.demo.bin.User;
import com.example.demo.dao.Userdao;
import com.example.demo.sever.UserSever;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping
public class IndexController {
    @Autowired
    UserSever sever;

    @GetMapping("/index")
    public String index(){
        return "Hello world!";
    }
    @GetMapping("/goods")
    public String getGoods(){
        return "A";
    }
    @GetMapping("/save")
    public void save(){
        User user = new User();
        user.setUserName("张三");
        user.setAga(19);
        sever.save(user);
    }
    @GetMapping("/findOne")
    public User find(){
        return sever.findById(1);
    }
}

