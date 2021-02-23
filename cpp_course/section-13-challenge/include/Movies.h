#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
    private :
        std::vector <Movie> collection;
        std::string name;

    public :
        Movies(std::string name_value = "none");
        std::string get_name();
        void add_movie(std::string &movie_name, std::string &movie_rating, unsigned int &movie_watched_count);
        void increment_watched_count(std::string &movie_name);
        void display_movies();
        bool movie_in_collection(const std::string &movie_name);        
};

#endif