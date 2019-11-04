package com.rgy.rgy.bean;

import javax.persistence.*;

//案例库
@Entity
@Table(name = "case_library")
public class CaseLibrary {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int caseLibraryID;

    @Column
    private String keyword;

    @OneToOne(targetEntity = Material.class)
    @JoinColumn(name = "materialUrl")
    private String materialUrl;

    public int getCaseLibraryID() {
        return caseLibraryID;
    }

    public void setCaseLibraryID(int caseLibraryID) {
        this.caseLibraryID = caseLibraryID;
    }

    public String getKeyword() {
        return keyword;
    }

    public void setKeyword(String keyword) {
        this.keyword = keyword;
    }

    public String getMaterialUrl() {
        return materialUrl;
    }

    public void setMaterialUrl(String materialUrl) {
        this.materialUrl = materialUrl;
    }

    public CaseLibrary(int caseLibraryID, String keyword, String materialUrl) {
        this.caseLibraryID = caseLibraryID;
        this.keyword = keyword;
        this.materialUrl = materialUrl;
    }
}
