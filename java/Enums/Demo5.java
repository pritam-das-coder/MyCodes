public class Demo5 {
    public static void main(String[] args) {
        // Direction[] directions = Direction.values();

        // for(Direction d : directions){
        //     System.out.println(d.name());
        // }

        Direction d = Direction.valueOf("WEST");
        System.out.println(d.name());

        // System.out.println(d.ordinal());
    }
}

enum Direction{
    NORTH,
    WEST,
    EAST,
    SOUTH;

    // @Override 
    // public String toString(){
    //     return this.name()+" Direction";
    // }
}