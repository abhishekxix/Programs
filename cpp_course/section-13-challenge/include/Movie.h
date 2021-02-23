#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie
{
    private :
        std::string name, rating;
        unsigned int watched;
        friend class Movies;
    
    public :
        Movie(std::string name = "none", std::string rating = "PG", unsigned int watched = 0);
        std::string get_movie_name();
        void display() const;
};

#endif