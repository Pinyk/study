package com.example.demo.sever;

import com.example.demo.bin.User;
import com.example.demo.dao.Userdao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class UserSever {

    @Autowired
    Userdao userdao;

    public int save(User user){
        if (userdao.save(user) != null)
            return 1;
        return 0;
    }
    public User findById(Integer id){
        return userdao.findByUserId(id);
    }
}

