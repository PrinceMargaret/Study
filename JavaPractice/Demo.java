

public class Demo {
    static int a=20;
      Demo(){
          System.out.println(" I am inside Demo constructor"+this);

      }
      {
          System.out.println("I am initializer block"+a);

      }
      
     
    
      
      static{
        System.out.println("I am in Static Block"+a);

    }
}
class Home extends Demo  {
    
public static void main(String[] args) {
    System.out.println("i am in Home init");
    Home h= new Home();

    
}

}
