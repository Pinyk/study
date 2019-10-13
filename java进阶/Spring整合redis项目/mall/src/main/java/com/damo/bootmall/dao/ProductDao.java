package com.damo.bootmall.dao;

import com.damo.bootmall.bean.Product;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface ProductDao extends JpaRepository<Product, Integer> {
    Product findByNameAndPrice(String name, Double price);
    Page<Product> findByName(String name, Pageable pageable);
}
