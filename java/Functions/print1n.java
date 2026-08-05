public class print1n {
    public static void main(String[] args) {
        int n=10;
        f(n);
    }
    static void f(int n){
        if(n==0) return;
        f(n-1);
        System.out.println(n);
    }
}
