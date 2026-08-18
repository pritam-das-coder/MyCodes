public class FunctionCall2 {
    public static void main(String[] args) {
        int x = 4;
        int y = 5;
        Random r1 = new Random(x, y);
        System.out.println(r1.x+" , "+r1.y);
        addTen(r1); // call by value
        System.out.println(r1.x+" , "+r1.y);
    }

    static void addTen(Random r){
        r.x += 10;
        r.y += 10;
    }
}

class Random{
    int x;
    int y;
    Random(int x, int y){
        this.x = x;
        this.y = y;
    }
}