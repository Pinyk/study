package com.tarena.shoot;
import com.tarena.shoot.ShootGame;
/*
敌飞机：是飞行物，也是敌人
 */

public class Airplane extends FlyingObject implements Enemy {
    private int speed = 2;

    //初始化数据
    public Airplane() {
        this.image = ShootGame.airplane;
        width = image.getWidth();
        height = image.getHeight();
        y = -height;
        x = (int) (Math.random() * (ShootGame.WIDTH - width));
    }

    public int getScore() {
        return 5;
    }

    @Override
    public void step() {                 //移动
        y += speed;
    }

    @Override
    public boolean outOfBounds() {
        return y > ShootGame.HEIGHT;
    }
}


