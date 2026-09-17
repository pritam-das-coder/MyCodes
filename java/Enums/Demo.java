public class Demo {
    public static void main(String[] args) {
        String status = PaymentStatus.SUCCESS;

        // int status2 = 100;

        System.out.println(status);

        // if(status == Role.ADMIN){

        // }

        // if(status == 3){

        // }

        if(status == "success"){

        }
    }
}

class PaymentStatus{
    // public static final int SUCCESS = 1;
    // public static final int FAILED = 2;
    // public static final int PENDING = 3;
    public static final String SUCCESS = "Success";
    public static final String FAILED = "Failed";
    public static final String PENDING = "Pending";
}

class Role{
    public static final int USER = 1;
    public static final int ADMIN = 2;
    public static final int MANAGER = 3;
}