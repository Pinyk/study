package com.rgy.rgy.dao;

import com.rgy.rgy.bean.CaseLibrary;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;

import java.util.List;

public interface CaseLibraryDao extends JpaRepository<CaseLibrary,Integer> {

    List<CaseLibrary> findByKeywordLike(String keyword); //模糊查询

//    @Query("select p from CaseLibrary p")
//    List<CaseLibrary> findAll();

    CaseLibrary findByCaseLibraryID(int id);
    boolean deleteByKeyword(int id); //根据id删除
}
