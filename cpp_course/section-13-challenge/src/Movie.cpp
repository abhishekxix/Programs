#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name_value, std::string rating_value, unsigned int watched_value)
    : name {name_value}, rating {rating_value}, watched {watched_value}
    {}

std::string Movie::get_movie_name()
{
    return this->name;
}

void Movie::display() const
{
    std::cout << "\nName :: " << this->name << std::endl
              << "Rating :: " << this->rating << std::endl
              << "Watched count :: " << this->watched << std::endl;
}