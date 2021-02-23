#include "functions.h"

void display(const char array[3][3]) {
        //display
    for(int i {}; i < 3; i++) {
        for(int j {}; j < 3; j++) {
            std::cout << array[i][j];
            if(j < 2)
                std::cout << '|';
        }
        std::cout << std::endl;
        for(int j {}; j < 6 && i < 2; j++) {
            if(j % 2 == 0)
                std::cout << '_';
            else 
                std::cout << " ";
        }        
        std::cout << std::endl;
    }
}

bool insert(char array[3][3], const int &place, const char &input, int &number_of_entries) {
    bool done {};
    if(place <= 3) {
        array[0][place - 1] = input;
        done = true;
        number_of_entries++;
    }
    else if(place > 3 && place <= 6) {
        array[1][place - 4] = input;
        done = true;
        number_of_entries++;
    }
    
    else if(place > 6 && place <= 9) {
        array[2][place - 7] = input;
        done = true;
        number_of_entries++;
    }
    return done;
}

int check_if_ended(const char array[3][3], const char &input, const char &comp_input) {
    for(int i {}; i < 3; i++) {
        if(array[i][0] == array[i][1] && array[i][3] == array[i][2]) {
            if(array[i][0] == input) 
                return 1;
            else if(array[i][0] == comp_input)
                return 2; 
        }
        if(array[0][i] == array[1][i] && array[1][i] == array[2][i]) {
            if(array[0][i] == input) 
                return 1;
            else if(array[0][i] == comp_input)
                return 2; 
        }
    }
    if(array[0][0] == array[1][1] && array[1][1] == array[2][2]) {
        if(array[1][1] == input)
            return 1;
        else if(array[1][1] == comp_input)
            return 2;
    }
    else if(array[0][2] == array[1][1] && array[1][1] == array[2][0]) {
            if(array[1][1] == input)
                return 1;
            else if(array[1][1] == comp_input)
                return 2;
    }
    return 0;
}

void check_winning(const char array[3][3], const int &won, const int &number_of_entries) {
    if(won == 1) {
        display(array);
        std::cout << "Player won!" << std::endl;
    }
    else if(won == 2) {
        display(array);
        std::cout << "Computer won!" << std::endl;
    }
    else if(won != 1 && won != 2 && number_of_entries == 9) {
        display(array);
        std::cout << "It's a tie." << std::endl;
        exit(0);
    }
}