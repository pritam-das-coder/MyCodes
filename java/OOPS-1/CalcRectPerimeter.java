public class CalcRectPerimeter {
    public static void main(String[] args) { // Command-line argument
        int length = Integer.parseInt(args[0]);
        int width = Integer.parseInt(args[1]);

        int perimeter = 2 * (length + width);
        System.out.println("The perimeter of rectangle is "+perimeter);
    }
}
