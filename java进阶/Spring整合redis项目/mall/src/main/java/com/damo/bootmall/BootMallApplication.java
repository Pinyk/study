package com.damo.bootmall;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.web.servlet.ServletComponentScan;
import org.springframework.cache.annotation.EnableCaching;

@ServletComponentScan
@SpringBootApplication
@EnableCaching
public class BootMallApplication {

    public static void main(String[] args) {
        SpringApplication.run(BootMallApplication.class, args);
    }

}
