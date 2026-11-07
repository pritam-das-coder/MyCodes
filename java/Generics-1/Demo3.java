public class Demo3 {
    public static void main(String[] args) {
        Box b1 = new Box(5);
        Box b2 = new Box("Hello");
        Box b3 = new Box(true);

        // Integer x = (Integer) b1.getValue();
        // String s = (String) b2.getValue();
        // Boolean b = (Boolean) b3.getValue();

        // System.out.println(x + 5);
        // System.out.println(s + 5);
        // System.out.println(b);

        String s = (String) b1.getValue();
        System.out.println(s);

        // System.out.println(b1.getValue());
    }
}

class Box{
    private Object value;

    Box(Object value){
        this.value = value;
    }

    Object getValue(){
        return value;
    }

    void setValue(Object x){
        value = x;
    }
}
