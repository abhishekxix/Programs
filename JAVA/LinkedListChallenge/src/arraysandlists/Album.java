package arraysandlists;

import java.util.ArrayList;

public class Album  {
    String albumName;
    private String artistName;



    public String getAlbumName() {
        return albumName;
    }

    public String getArtistName() {
        return artistName;
    }

    ArrayList<Song> songs;

    public Album(String albumName, String artistName) {
        this.albumName = albumName;
        this.artistName = artistName;
        this.songs = new ArrayList<>();
    }

    public void addSong(String songName, double duration) {
        if(findSong(songName) == -1) {
            this.songs.add(Song.createSong(songName, duration));
            System.out.println(songName + " added to " + this.albumName);
        }
        else {
            System.out.println(songName + " already exists in " + albumName);
        }
    }

    private int findSong(String title) {
        Song song = null;

        for(int i = 0; i < this.songs.size(); i++) {
            song = this.songs.get(i);
            if(song.getTitle() == title)
                return i;
        }

        return -1;
    }


}
