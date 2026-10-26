public class Demo6 {
    public static void main(String[] args) {
        int arr[] = new int[5];
        try{
            System.out.println(arr[5]); // new ArrayIndexOutOfBoundsException("Index 5 out of bounds for length 5")
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e.getMessage());
        }
    }
}
