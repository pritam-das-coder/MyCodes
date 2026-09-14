// Create an interface called Player. The interface has an abstract method called
// play() that displays a message describing the meaning of “play” to the class.
// Create classes called Child, Musician, and Actor that all implement Player.
public class Q11 {
    public static void main(String[] args) {
        Player player = new Child();
        player.play();

        player = new Musician();
        player.play();

        player = new Actor();
        player.play();
    }
}

interface Player{
    void play();
}

class Child implements Player{
    @Override 
    public void play(){
        System.out.println("Child is playing a game.");
    }
}

class Musician implements Player{
    @Override 
    public void play(){
        System.out.println("Musician is playing a musical instrument.");
    }
}

class Actor implements Player{
    @Override 
    public void play(){
        System.out.println("Actor is playing his movie role.");
    }
}