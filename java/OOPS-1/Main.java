public class Main {
    public static void main(String[] args) {
        // java Main input.txt output.txt
        System.out.println(args.length);

        for(int i=0;i<args.length;i++){
            System.out.println(args[i]);
        }
    }
}
