package com.rgy.rgy.dao;

import com.rgy.rgy.bean.Template;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface ReportDao extends JpaRepository<Template,Integer> {
}
