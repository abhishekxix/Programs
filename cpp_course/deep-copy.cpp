#include <iostream>
#include <cstdlib>

class Deep
{
    private :
        int *data;
    
    public :
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}

        //constructor
        Deep(int d);

        //copy constructor
        Deep(const Deep &source);

        //destructor
        ~Deep();
};
void display_deep(Deep s);

int main()
{
    system("clear");

    Deep object1 {100};
    display_deep(object1);
    
    Deep object2 {object1};
    object2.set_data_value(1000);

    return 0;
}

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep {*source.data} 
{
    std::cout << "Copy constructor - Deep copy." << std::endl;
}

Deep::~Deep()
{
    delete data;
    std::cout << "Destructor freeing storage." << std::endl;
}

void display_deep(Deep s)
{
    std::cout << s.get_data_value() << std::endl;
}