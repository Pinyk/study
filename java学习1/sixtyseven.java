package ke;

class sixtyseven{
    public sixtyseven(){
    }
    protected void dosomething(){
    }
    protected sixtyseven dolt(){
        return new sixtyseven();
    }
}
class sixtyseven2 extends sixtyseven{
    public sixtyseven2(){
        super();
        super.dosomething();
    }
    public void dosomethingnew(){
    }
    public void dosomething(){
    }
    protected sixtyseven2 dolt(){
        return new sixtyseven2();
    }
}
