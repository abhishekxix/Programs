#include <iostream>

int main()
{
    int array[50] {};


    size_t counter {};
    std::cout << "Enter the number of predefined elements in the array -> ";
    std::cin >> counter;


    for(size_t i {}; i < counter; i++)
    {
        array[i] = i * i / 2;
    }

    std::cout << "\nThe array before insertion is -> \n";
    for(int i {}; i < counter; i++)
            std::cout << array[i] << " " << std::flush;

    size_t position {};

    input :
    std::cout << "\nEnter the position to add element in the array -> ";
    std::cin >> position;

    if((position < counter) && (counter <= 50))
    {
    	
    int value {};
    std::cout << "Enter the value to be inserted -> ";
    std::cin >> value;

    for(size_t i {counter - 1}; i >= position - 1; i--)
    {
        array[i +1] = array[i];
    }
    counter++;
    array[position - 1] = value;

    std::cout << "\nThe array after insertion is -> \n";
    for(int i {}; i < counter; i++)
            std::cout << array[i] << " " << std::flush;

    }
    else 
    {
    	std::cout << "Position should be less than or equal to " << counter << std::endl;
	goto input;
    }
    return 0;
}
