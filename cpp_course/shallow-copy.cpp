#include <iostream>

class Shallow
{
    private :
        int *data;
    
    public :
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}

        //constructor
        Shallow(int d);

        //copy constructor
        Shallow(const Shallow &source);

        //destructor
        ~Shallow();
};
void display_shallow(Shallow s);

int main()
{
    Shallow object1 {100};
    display_shallow(object1);
    
    Shallow object2 {object1};
    object2.set_data_value(1000);

    return 0;
}

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data {source.data} 
{
    std::cout << "Copy constructor - Shallow copy." << std::endl;
}

Shallow::~Shallow()
{
    delete data;
    std::cout << "Destructor freeing storage." << std::endl;
}

void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}