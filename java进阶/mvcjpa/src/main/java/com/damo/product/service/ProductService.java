package com.damo.product.service;

import com.damo.product.model.Product;
import com.damo.product.repository.ProductRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ProductService {

    @Autowired
    ProductRepository productRepository;

    public List<Product> getAll() {
        return (List<Product>) productRepository.findAll();
    }

    public Product getById(int id) {
        return productRepository.findOne(id);
    }

    public List<Product> getByName(String name) {
        return productRepository.findByName(name);
    }

    public boolean addProduct(Product product) {
        return productRepository.save(product) != null;
    }

    public boolean updateProduct(Product product) {
        return productRepository.save(product) != null;
    }

    public boolean deleteProduct(int id) {
        if(productRepository.exists(id)) {
            productRepository.delete(id);
            return true;
        } else {
            return false;
        }
    }
}
