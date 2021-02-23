#include <iostream>
#include <vector>

class Move 
{
    private :
        int *data;
    
    public :
        //class methods
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}
        //constructor
        Move(int d = 0);
        //copy constructor
        Move(const Move &source);
        //move constructor
        Move(Move &&source) noexcept;
        ~Move();
};

int main()
{
    std::vector <Move> vec;
    vec.push_back(Move {10});    //Here Move {10} is an r-value of type Move. because it is creating a temp value.
    vec.push_back(Move {20});
    vec.push_back(Move {30});
    vec.push_back(Move {40});
    vec.push_back(Move {50});
    vec.push_back(Move {60});
    vec.push_back(Move {70});
    vec.push_back(Move {80});

    return 0;
}

Move::Move(int d)
{
    data = new int;
    *data = d;
    std::cout << "Constructor for :: " << *data << std::endl;


}

Move::Move(const Move &source)
    : Move(*source.data)
{
    std::cout << "Copy constructor - Deep copy for :: " << *data << std::endl;
}

Move::Move(Move &&source) noexcept
    : data {source.data}
{
    source.data = nullptr;
    std::cout << "Move Constructor - moving resource :: " << *data << std::endl;
}

Move::~Move()
{
    if(data != nullptr)   
    { 
        std::cout << "Destructor freeing storage for :: " << *data << std::endl;
        delete data;
    }

    else 
        std::cout << "Destructor freeing data for nullptr" << std::endl;
}