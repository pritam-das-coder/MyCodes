public class Demo5 {
    public static void main(String[] args) {
        try{
            checkEligibility(-5);
        }
        catch(IllegalArgumentException e){
            System.out.println(e.getMessage());
        }
    }

    private static void checkEligibility(int age){
        if(age <= 0){
            throw new IllegalArgumentException("Age cannot be negative");
        }

        if(age > 18){
            System.out.println("You are eligible to vote");
        }
    }
}
