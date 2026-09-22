// dynamic method dispatch
public class Demo2 {
    public static void main(String[] args) {
        Payment payment = new DebitCard();
        payment.pay();
    }
}

interface Payment{
    void pay();
}

class CreditCard implements Payment{
    public void pay(){
        System.out.println("Paying via credit card");
    }
}

class DebitCard implements Payment{
    public void pay(){
        System.out.println("Paying via debit card");
    }
}
