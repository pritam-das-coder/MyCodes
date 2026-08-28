public class Demo3 {
    public static void main(String[] args) {
        A a = new B();
        // a.fun();
        System.out.println(a.getX());
        
    }
}

// class A{
//     static void fun(){
//         System.out.println("From A");
//     }

//     private void fun2(){
//         System.out.println("From A");
//     }

//     final void fun3(){
//         System.out.println("From A");
//     }
// }

// class B extends A{
//     static void fun(){
//         System.out.println("From B");
//     }

//     // final void fun3(){
//     //     System.out.println("From B");
//     // }
// }

class A{
    int x = 10;

    int getX(){
        return x;
    }
}

class B extends A{
    int x = 20;

    int getX(){
        return x;
    }
}