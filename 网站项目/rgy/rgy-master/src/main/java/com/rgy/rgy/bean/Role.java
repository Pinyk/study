package com.rgy.rgy.bean;

import javax.persistence.*;

//角色管理
@Entity
@Table(name = "role")
public class Role {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int roleId;

    @Column
    private String roleName;

    @Column
    private String roleNote;

    public int getRoleId() {
        return roleId;
    }

    public void setRoleId(int roleId) {
        this.roleId = roleId;
    }

    public String getRoleName() {
        return roleName;
    }

    public void setRoleName(String roleName) {
        this.roleName = roleName;
    }

    public String getRoleNote() {
        return roleNote;
    }

    public void setRoleNote(String roleNote) {
        this.roleNote = roleNote;
    }

    public Role(int roleId, String roleName, String roleNote) {
        this.roleId = roleId;
        this.roleName = roleName;
        this.roleNote = roleNote;
    }

    public Role(String roleName, String roleNote) {
        this.roleName = roleName;
        this.roleNote = roleNote;
    }
}
