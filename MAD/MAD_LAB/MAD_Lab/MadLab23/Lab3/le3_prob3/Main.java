public class Main{
    public static void main(String[] args) {
        RHD d1= new RHD();
        LD d2= new LD();
        WD d3= new WD();
        RD d4= new RD();
        
        d1.swim();
        d1.fly();
        d1.squeak();

        d2.swim();
        d2.fly();
        d2.squeak();
        
        d3.swim();
        //d3.fly();
        //d3.squeak();        

        d4.swim();
        //d4.fly();
        d4.squeak();
    }
}