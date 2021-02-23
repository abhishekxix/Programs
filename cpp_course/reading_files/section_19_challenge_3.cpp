#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>

void search(std::ifstream &file, const std::string &search_item);

int main()
{
    std::cout << std::setw(50) <<  "Word finder" << std:: endl;
    std::ifstream romeo_and_juliet {"romeo_and_juliet.txt"};
    if(!romeo_and_juliet)
    {
        std::cerr << "\nError opening the file!" << std::endl;   
        return 1;
    }

    std::string search_item {};
    std::cout << "\nEnter the word you want to search -> ";
    std::cin >> search_item;
    std::transform(search_item.begin(), search_item.end(), search_item.begin(), ::tolower);
    
    search(romeo_and_juliet,search_item);
    romeo_and_juliet.close();
}

void search(std::ifstream &file, const std::string &search_item)
{
    int word_count {}, found_count {};
    std::string word_in_file {};
    while(file >> word_in_file)
    {
        std::transform(word_in_file.begin(), word_in_file.end(), word_in_file.begin(), ::tolower);
        word_count++;
        if(word_in_file.find(search_item) != std::string::npos)
            found_count++;
    }
    std::cout << "Number of words searched = " << word_count++ << std::endl
              << "Number of times " << search_item << " was found = " << found_count << std::endl; 
}
