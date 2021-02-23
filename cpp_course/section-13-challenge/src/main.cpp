#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

void add_movie_to_collection(Movies &movies_object, std::string movie_name, std::string movie_rating, unsigned int movie_watched_count);
void increment_watched_count( Movies &movies_object,std::string movie_name);

int main() 
{
    Movies my_movies {"My movies"};
    my_movies.display_movies();
    add_movie_to_collection(my_movies, "Big", "PG-13", 2);
    add_movie_to_collection(my_movies, "Star Wars", "PG", 5);
    add_movie_to_collection(my_movies, "Cinderella", "PG", 7);
    my_movies.display_movies();
    add_movie_to_collection(my_movies, "Cinderella", "PG", 7);
    add_movie_to_collection(my_movies, "Ice Age", "PG", 12);
    
    my_movies.display_movies();

    increment_watched_count(my_movies, "Big");
    increment_watched_count(my_movies, "Ice Age");

    my_movies.display_movies();

    return 0;
}

void add_movie_to_collection(Movies &movies_object, std::string movie_name, std::string movie_rating, unsigned int movie_watched_count)
{
    if(movies_object.movie_in_collection(movie_name))
        std::cout << movie_name << " already in the list - So not added." << std::endl;
    else
    {
        movies_object.add_movie(movie_name, movie_rating, movie_watched_count);
        std::cout << std::endl << movie_name << " Added to the list." << std::endl;
    }  
}

void increment_watched_count(Movies &movies_object, std::string movie_name)
{
    if(movies_object.movie_in_collection(movie_name))
    {
        movies_object.increment_watched_count(movie_name);
        std::cout << "Watch count incremented for " << movie_name << std::endl;
    }
    else
    
        std::cout << movie_name << " not found in " << movies_object.get_name() << std::endl;  
}