package com.rgy.rgy.bean;

import javax.persistence.*;

//电厂信息
@Entity
@Table(name = "power_plant")
public class PowerPlant {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int powerPlantID;

    @Column
    private String powerPlantName;

    @Column
    private String powerPlantType;

    @Column
    private String generatorCapacity;

    @Column
    private String voltageLevel;

    @Column
    private String address;

    @Column
    private String phone;

    @Column
    private String postcode;

    @Column
    private String infoState;

    @Override
    public String toString() {
        return "PowerPlant{" +
                "powerPlantID=" + powerPlantID +
                ", powerPlantName='" + powerPlantName + '\'' +
                ", powerPlantType='" + powerPlantType + '\'' +
                ", generatorCapacity='" + generatorCapacity + '\'' +
                ", voltageLevel='" + voltageLevel + '\'' +
                ", address='" + address + '\'' +
                ", phone='" + phone + '\'' +
                ", postcode='" + postcode + '\'' +
                ", infoState='" + infoState + '\'' +
                '}';
    }

    public int getPowerPlantID() {
        return powerPlantID;
    }

    public void setPowerPlantID(int powerPlantID) {
        this.powerPlantID = powerPlantID;
    }

    public String getPowerPlantName() {
        return powerPlantName;
    }

    public void setPowerPlantName(String powerPlantName) {
        this.powerPlantName = powerPlantName;
    }

    public String getPowerPlantType() {
        return powerPlantType;
    }

    public void setPowerPlantType(String powerPlantType) {
        this.powerPlantType = powerPlantType;
    }

    public String getGeneratorCapacity() {
        return generatorCapacity;
    }

    public void setGeneratorCapacity(String generatorCapacity) {
        this.generatorCapacity = generatorCapacity;
    }

    public String getVoltageLevel() {
        return voltageLevel;
    }

    public void setVoltageLevel(String voltageLevel) {
        this.voltageLevel = voltageLevel;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getPostcode() {
        return postcode;
    }

    public void setPostcode(String postcode) {
        this.postcode = postcode;
    }

    public String getInfoState() {
        return infoState;
    }

    public void setInfoState(String infoState) {
        this.infoState = infoState;
    }

    public PowerPlant(int powerPlantID, String powerPlantName, String powerPlantType, String generatorCapacity, String voltageLevel, String address, String phone, String postcode, String infoState) {
        this.powerPlantID = powerPlantID;
        this.powerPlantName = powerPlantName;
        this.powerPlantType = powerPlantType;
        this.generatorCapacity = generatorCapacity;
        this.voltageLevel = voltageLevel;
        this.address = address;
        this.phone = phone;
        this.postcode = postcode;
        this.infoState = infoState;
    }

    public PowerPlant(String powerPlantName, String powerPlantType, String generatorCapacity, String voltageLevel, String address, String phone, String postcode, String infoState) {
        this.powerPlantName = powerPlantName;
        this.powerPlantType = powerPlantType;
        this.generatorCapacity = generatorCapacity;
        this.voltageLevel = voltageLevel;
        this.address = address;
        this.phone = phone;
        this.postcode = postcode;
        this.infoState = infoState;
    }
}
