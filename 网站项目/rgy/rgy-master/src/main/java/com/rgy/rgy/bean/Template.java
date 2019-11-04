package com.rgy.rgy.bean;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import javax.persistence.*;

/**
 * 报告模板表
 * 与设备类型表和用户主键暂时没有外键约束
 */

@Data
@AllArgsConstructor
@NoArgsConstructor
@Entity
@Table(name = "template")
public class Template {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "templateId")
    private int templateId;

    @Column
    private String templateName;

    @Column
    private String basis;

    @Column
    private String equipmentTypeId;

    @Column
    private String editor;

    @Column
    private String editorDate;

    @Column
    private int infoState;

    public int getTemplateId() {
        return templateId;
    }

    public Template(String templateName, String basis, String equipmentTypeId, String editor, String editorDate, int infoState) {
        this.templateName = templateName;
        this.basis = basis;
        this.equipmentTypeId = equipmentTypeId;
        this.editor = editor;
        this.editorDate = editorDate;
        this.infoState = infoState;
    }

    public void setInfoState(int infoState) {
        this.infoState = infoState;
    }
}
