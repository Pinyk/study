package com.damo.bootmall.component;


import com.damo.bootmall.bean.Product;
import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.redis.core.StringRedisTemplate;
import org.springframework.data.redis.core.ValueOperations;
import org.springframework.stereotype.Component;

import java.io.IOException;

@Component
public class RedisConponent {
    private static final Logger logger = LoggerFactory.getLogger(RedisConponent.class);

    @Autowired
    private StringRedisTemplate template;

    public void set(String key, Product value) throws JsonProcessingException {
        ValueOperations<String, String> ops = this.template.opsForValue();
        ObjectMapper mapper = new ObjectMapper();
        if(!this.template.hasKey(key)){
            String str = mapper.writeValueAsString(value);
            ops.set(key, str);
            logger.info(key + "set success");
        }else{
            logger.info(key + "already exist");
        }
    }

    public Product get(String key) throws IOException {
        String str = this.template.opsForValue().get(key);
        Product product = null;

        if(str != null){
            ObjectMapper mapper = new ObjectMapper();
            product = mapper.readValue(str, Product.class);
        }
        return product;
    }

    public void del(String key){
        this.template.delete(key);
    }
}