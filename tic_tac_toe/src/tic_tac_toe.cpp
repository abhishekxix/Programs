#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <sstream>
#include "functions.h"
#include <limits>
#include <ctime>

int main() {
    char array[3][3] {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int won {};
    char input {}, comp_input {};
    int place {}, used_places[9] {}, counter {}, number_of_entries {};
    std::string input_validator_string {};
    
    
    std::srand(time(nullptr));

    do {
        display(array);
        if(counter == 0) {
            a :
            std::cout << "X or 0" << std::endl;
            std::cin >> input;
            input = std::toupper(input);
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if(input != 'X' && input != '0') {  
                std::cout << "You should only enter 0 or X..." << std::endl;
                goto a;
            }
            if(input == 'X')
                comp_input = '0';
            else 
                comp_input = 'X';
        }

        b :
        std::cout << "Enter the position you want to enter " << input << " at -> ";
        std::getline(std::cin, input_validator_string);
        std::istringstream input_validator {input_validator_string};

        if(!(input_validator >> place)) {
            std::cout << "The place should only be an integer." << std::endl;
            input_validator.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            goto b;
        }
        else if(!(place > 0 && place < 10)) {
            std::cout << "The place should be less than 10 and greater than 0." << std::endl;
            goto b;
        }

        //checking for used places
        for(int i {}; i < 9; i++) {
            if(place == used_places[i]) {
                std::cout << "you can't enter at this position..." << std::endl;
                goto b;
            }
        }

        if(insert(array, place, input, number_of_entries)) {
            used_places[place - 1] = place;        
        }
       
        won = check_if_ended(array, input, comp_input);
        check_winning(array, won, number_of_entries);

        if(number_of_entries < 9) {
        comp :
        place = (std::rand() % 9) + 1;
        for(int i {}; i < 9; i++) {
            if(place == used_places[i]) {
                goto comp;
            }
        }
        if(insert(array, place, comp_input, number_of_entries))
            used_places[place - 1] = place;
        }

        won = check_if_ended(array, input, comp_input);
        check_winning(array, won, number_of_entries); 

        counter++;
    
    } while(!(won == 1 || won == 2));
    
    return 0;
}