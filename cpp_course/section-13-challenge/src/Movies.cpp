#include "Movies.h"
#include <string>
#include <iostream>

Movies::Movies(std::string name_value)
    : name {name_value}
{}

std::string Movies::get_name()
{
    return this->name;
}

void Movies::add_movie(std::string &movie_name, std::string &movie_rating, unsigned int &movie_watched_count)
{
    Movie movie_object{movie_name, movie_rating, movie_watched_count};
    collection.push_back(movie_object);
}

void Movies::increment_watched_count(std::string &movie_name)
{
   for(Movie &movie : this->collection)
        if(movie.name == movie_name)
            {
                movie.watched++;
                return;
            }

}

void Movies::display_movies()
{
    if(this->collection.size() != 0)
    {
        std::cout << "\n================================" << std::endl
              <<  this->name << std::endl
              << "--------------------------------" << std::endl;

        for(const auto movie : this->collection)
        {
            movie.display();
        }
        std::cout << "================================" << std::endl;
    }
    else
    {
        std::cout << this->name << " is empty." << std::endl;
    }
    
}

bool Movies::movie_in_collection(const std::string &movie_name)
{
    for(auto &n : this->collection)
        if(n.name == movie_name)
        { 
           return true;
        }
    return false;
}