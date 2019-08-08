package com.demo.jsp;

import java.util.HashMap;
import java.util.Map;

public class Register {
    private String name;
    private String age;
    private String email;
    private Map<String,String> errors = null;

    public Register() {
        this.name="";
        this.age="";
        this.email="";
        this.errors = new HashMap<>();
    }
    public boolean isValidate(){
        boolean flag = true;
        if(!this.name.matches("\\w{6,15}")){
            flag = false;
            this.name="";
            errors.put("errname","用户名是6~15位的数字或字母");
        }
        if(!this.email.matches("\\w+@\\w+\\.\\w+\\.?\\w*")){
            flag = false;
            this.email = "";
            errors.put("erremail","输入的email不合法");
        }
        if(!this.age.matches("\\d+")){
            flag = false;
            this.age = "";
            errors.put("errage","年龄只能是数字");
        }
        return flag;
    }

    public String getName() {
        return name;
    }

    public String getError(String key){
        String value = this.errors.get(key);
        return value == null ? "" : value;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAge() {
        return age;
    }

    public void setAge(String age) {
        this.age = age;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
}
