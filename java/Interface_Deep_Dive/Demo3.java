public class Demo3 {
    public static void main(String[] args) {
        MathConstant mc = new Random();
        mc.fun();
        System.out.println(MathConstant.PI_VALUE);
    }
}

interface MathConstant{
    double PI_VALUE = 3.14;
    void fun();
}

class Random implements MathConstant{
    @Override
    public void fun(){
        System.out.println(PI_VALUE);
    }
}