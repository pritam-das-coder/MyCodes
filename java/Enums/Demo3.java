public class Demo3 {
    public static void main(String[] args) {
        Direction d = Direction.WEST;
        System.out.println(d);
        System.out.println(d.getDegrees());
    }
}

enum Direction{
    NORTH(0),
    SOUTH(180),
    EAST(90),
    WEST(270);

    private int degrees;

    Direction(int degrees){
        this.degrees = degrees;
    }

    public int getDegrees(){
        return degrees;
    }
}
