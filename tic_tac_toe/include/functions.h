#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include <iostream>

void display(const char array[3][3]);
bool insert(char array[3][3], const int &place, const char &input, int &number_of_entries);
int check_if_ended(const char array[3][3], const char &input, const char &comp_input);
void check_winning(const char array[3][3], const int &won, const int &number_of_entries);

#endif