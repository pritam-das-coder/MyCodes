public class Demo2 {
    public static void main(String[] args) {
        PaymentStatus status = PaymentStatus.FAILED;

        System.out.println(status.name());
    }
}

enum PaymentStatus{
    SUCCESS,
    FAILED,
    PENDING;
}