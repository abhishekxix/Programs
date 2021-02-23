#include <iostream>

int main()
{
	int n {};
	std::cout << "Enter the total number of elements in the array -> ";
	std::cin >> n;

	int array[n] {};


	size_t counter {};
	std::cout << "Enter the number of predefined elements in the array -> ";
	std::cin >> counter;


	for(size_t i {}; i < counter; i++)
	{
	array[i] = i * i / 2;
	}

	std::cout << "\nThe array before deletion is -> \n";
	for(size_t i {}; i < counter; i++)
	    std::cout << array[i] << " " << std::flush;

	size_t position {};
	input :	
	std::cout << "\nEnter the position to delete element in the array -> ";
	std::cin >> position;
	if(position < counter)
	{
		
		for(size_t i {position -1}; i < counter; i++)
		{
		array[i] = array[i + 1];
		}
		counter--;

		std::cout << "\nThe array after deletion is -> \n";
		for(size_t i {}; i < counter; i++)
		    std::cout << array[i] << " " << std::flush;	
	}
	else
	{
		std::cout << "Position should be less than " << counter << std::endl;
		goto input;	
	}

	return 0;
}
