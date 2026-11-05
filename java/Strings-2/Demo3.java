public class Demo3 {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();

        sb.append("Pritam");
        // sb.append("Das");
        // sb.append("aaaaa");
        // sb.append("xx");
        // sb.append("s");
        // length = 6 | 9 | 14 | 16 | 17
        // capacity = 16 | 16 | 16 | 16 | 34

        // System.out.println(sb.length());
        System.out.println(sb.capacity());

        // sb.insert(2, 'x');
        // sb.delete(1, 3);
        // sb.deleteCharAt(3);
        // sb.replace(1, 3, "VY");
        // sb.reverse();
        // sb.setCharAt(2, 'x');
        // sb.ensureCapacity(16);
        // sb.append("aaaaaaaaaaa");
        sb.trimToSize();
        System.out.println(sb.capacity());
    }
}
