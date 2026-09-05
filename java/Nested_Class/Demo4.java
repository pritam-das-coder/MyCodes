public class Demo4 {
    public static void main(String[] args) {
        // Person per = new Guest();
        // per.introduce();

        Person p2 = new Person(){
            @Override 
            void introduce(){
                fun();
                System.out.println("Hi, I am a Guest");
            }

            void fun(){
                System.out.println("Hi");
            }
        };
        p2.introduce();
        // p2.fun();// error
    }
}

class Person{
    void introduce(){
        System.out.println("Hi, I am a person");
    }
}

// class Guest extends Person{
//     @Override 
//     void introduce(){
//         System.out.println("Hi, I am a Guest");
//     }
// }