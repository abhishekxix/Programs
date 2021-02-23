package arraysandlists;

public class Song {
    String title;
    double duration;

    public Song(String title, double duration) {
        this.title = title;
        this.duration = duration;
    }

    public String getTitle() {
        return title;
    }


    public double getDuration() {
        return duration;
    }

    public static Song createSong(String title, double duration) {
        return (new Song(title, duration));
    }
}
