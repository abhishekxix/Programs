package Polymorphism;

class Movie {
    private String name;

    public Movie(String name) {
        this.name = name;
    }

    public String plot() {
        return ("No plot here");
    }

    public String getName() {
        return this.name;
    }
}

class Jaws extends Movie {
    public Jaws() {
        super("Jaws");
    }

    @Override
    public String plot() {
        return ("A shark eats a lot of people");
    }
}

class IndependanceDay extends Movie {

    IndependanceDay() {
        super("Independance Day");
    }

    @Override
    public String plot() {
        return ("Aliens attemt to take over the planet Earth");
    }
}

class MazeRunner extends Movie {

    public MazeRunner() {
        super("Maze Runner");
    }

    @Override
    public String plot() {
        return  ("Kids try to escape a maze.");
    }
}

class StarWars extends Movie {

    StarWars() {
        super("Star Wars");
    }

    @Override
    public String plot() {
        return ("Imperial forces try to take over the universe.");
    }
}

class ForgettableMovie extends Movie {
    ForgettableMovie() {
        super("Forgettable");
    }
}


public class Main {

    public static void main(String[] args) {
        Movie movie = null;

        for(int i = 0; i < 5; i++) {
            movie = randomMovie();
            System.out.println( "Name of the movie is " + movie.getName()
                    + " and the plot is : " + movie.plot());
        }
    }

    public static  Movie randomMovie() {
        int randomNumber = (int)(Math.random() * 5) + 1;

        switch (randomNumber) {
            case 1 :
                return (new Jaws());

            case 2 :
                return (new IndependanceDay());

            case 3 :
                return (new MazeRunner());

            case 4 :
                return (new StarWars());

            case 5 :
                return (new ForgettableMovie());

            default :
                return null;
        }
    }
}
