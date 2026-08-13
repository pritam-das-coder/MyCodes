public class scope {
    static String name="Pritam"; // global

    static void fun(){
        name=name+" Das";
    }
    public static void main(String[] args) {
        // {
        //     // a=a+2;
        //     int a=3;
        //     System.out.println(a);
        // }
        // System.out.println(a);
        fun();
        System.out.println(name);
    }
}
