#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void display(const vector <int> &list_of_numbers);
void add_number(vector <int> &list_of_numbers, int entry);
double mean_of_list(const vector <int> &list_of_numbers);
int smallest_number(const vector <int> &list_of_numbers);
int largest_number(const vector <int> &list_of_numbers);
char get_option();

int main()
{
    system("clear");
    vector <int> list_of_numbers {};
    char option {};

    do
    {   
        option = get_option();       
        system("clear");

        switch(option)
        {
            case 'P' :
                display(list_of_numbers);                
                break;
            
            case 'A' :
            {
                int entry {0};
                cout << "Enter the number you want to add to the list -> ";
                cin >> entry;
                system("clear");
                add_number(list_of_numbers, entry);
               
                break;
            }

            case 'M' :
            {   
                if(list_of_numbers.size() != 0)
                {
                    double mean_of_the_list {};
                    mean_of_the_list = mean_of_list(list_of_numbers);   
                    cout << "The mean of the numbers in the list is " << mean_of_the_list << endl;
                }
                else 
                    cout << "Unable to calculate mean - No data in the list." << endl;
    
                break;
            }

            case 'S' :
            {
                if (list_of_numbers.size() != 0)
                {
                    int smallest {};
                    smallest = smallest_number(list_of_numbers);
                    cout << "The smallest number in the list is " << smallest << endl;
                }
                else 
                {
                    cout << "Unable to determine the smallest number - no data." << endl;
                }
                break;
            }

            case 'L' :
            {

                if (list_of_numbers.size() != 0)
                {
                    int largest {};
                    largest = largest_number(list_of_numbers);   
                    cout << "The largest number in the list is " << largest << endl;
                }
                else 
                {
                    cout << "Unable to determine the largest number - no data." << endl;
                }
                break;
            }

            case 'C' :
                if(list_of_numbers.size() == 0)
                    cout << "[] - list is already empty" << endl;
                else
                {
                    list_of_numbers.clear();
                    cout << "List cleared." << endl;
                }
                break;

            case 'Q' :
                cout << "Goodbye!" << endl;
                break;
            
            default : 
                cout << "Invalid selection!" << endl;
        }
        
    }while(option !=  'Q');

    return 0;
}

void display(const vector <int> &list_of_numbers)
{

    if(list_of_numbers.size() != 0)
    {
        cout << "[ ";
        
        for(auto number : list_of_numbers)
        {
            cout << number << " ";
        }
        cout << "]" << endl;
    }
    else
    {
        cout << "[] - The list is empty.\n";
    }                    
}

void add_number(vector <int> &list_of_numbers, int entry)
{   
    bool is_found {false};

    for (auto number : list_of_numbers)
    {
        if (number == entry)
        {
            is_found = true;
            break;
        }
    } 
    if(is_found)
    {
        cout << "Can't add " <<  entry << " - already present in the list." << endl;
    } 
    else
    {
        list_of_numbers.push_back(entry);
        cout << "\n" << entry << " added to the list.\n";  
    }                    
}

double mean_of_list(const vector <int> &list_of_numbers)
{
    int sum {};
    
    for (auto number : list_of_numbers)
    {
        sum += number;
    }
    double mean_of_the_list {};
    mean_of_the_list = static_cast<double> (sum) / list_of_numbers.size();
    return mean_of_the_list;
}

int smallest_number(const vector <int> &list_of_numbers)
{
    int smallest {list_of_numbers.at(0)};

    for (auto number :list_of_numbers)
    {
        if(number < smallest)
        {
            smallest = number;
        }
    }
    return smallest;
}

int largest_number(const vector <int> &list_of_numbers)
{
    int largest {list_of_numbers.at(0)};

    for (auto number :list_of_numbers)
    {
        if(number > largest)
        {
            largest = number;
        }
    }
    return largest;
}

char get_option()
{
    char option {};
    cout << "\nThe following program manipulates a list of numbers according to the choice of the user from the following menu ::\n"
            << "\nP -> Print numbers."
            << "\nA -> Add a number to the list."
            << "\nM -> Display the mean of all the numbers in the list."
            << "\nS -> Display the smallest number from the list."
            << "\nL -> Display the largest number from the list."
            << "\nC -> Clear the list."
            << "\nQ -> Quit\n"
            << "\nEnter your choice -> ";
    cin >> option;
    option = toupper(option);
    return option;
}