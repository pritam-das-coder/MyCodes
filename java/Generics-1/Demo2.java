public class Demo2 {
    public static void main(String[] args) {
        Box b1 = new Box(5);
        // Box b2 = new Box("Hello");

        System.out.println(b1.getValue());
    }
}

class Box{
    private int value;

    Box(int value){
        this.value = value;
    }

    int getValue(){
        return value;
    }

    void setValue(int x){
        value = x;
    }
}
