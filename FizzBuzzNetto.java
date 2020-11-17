public class HelloWorldNetto {

    public static void main(String[] args) {

        int x = 15;
        System.out.println("input " + x);

        if(x==0){
            System.out.println(x);
        }
        else if(x%5 == 0 && x%3 == 0){
            System.out.println("FishBuzz");
        }
        else if(x%5 == 0){
            System.out.println("Buzz");
        }
        else if (x%3 == 0){
            System.out.println("Fish");
        }else{
            System.out.println(x);
        }
    }

}