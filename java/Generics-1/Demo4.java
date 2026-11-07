public class Demo4 {
    public static void main(String[] args) {
        Box<Integer> b1 = new Box<>(5);
        Box<String> b2 = new Box<>("Hello");
        Box<Boolean> b3 = new Box<>(true);

        Integer x = b1.getValue();
        String s = b2.getValue();
        Boolean b = b3.getValue();

        System.out.println(x + 5);
        System.out.println(s + 5);
        System.out.println(b);

        // String s = (String) b1.getValue(); // error
        // System.out.println(s);

        // System.out.println(b1.getValue());
    }
}
// Generics
class Box<T>{ // type parameter
    private T value;

    Box(T value){
        this.value = value;
    }

    T getValue(){
        return value;
    }

    void setValue(T x){
        value = x;
    }
}
