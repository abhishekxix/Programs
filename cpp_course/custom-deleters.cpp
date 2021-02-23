#include <iostream>
#include <memory>

class Test
{
    private :
        int data;
    
    public :
        Test(int data = 0)  : data{data} {std::cout << "Test constructor(" << data << ")" << std::endl;}
        ~Test() {std::cout << "Test destructor(" << data << ")" << std::endl;}
        int get_data() const {return this->data;}
};

void my_deleter(Test *raw_ptr)
{
    std::cout << "\tUsing my_deleter custom function." << std::endl;
    delete raw_ptr;
}

int main()
{
    //using a function
    {
        std::shared_ptr<Test> ptr1 {new Test {100}, my_deleter};   //we can also pass a reference to the custom deleter function but not necessarily because a function's name evaluates to it's location.
    }
    
    std::cout << "================================================" << std::endl;
    
    {
        //using a lambda expression
        std::shared_ptr<Test> ptr2 {new Test {1000}, [] (Test *raw_ptr)
        {
            std::cout << "\tUsing lambda custom deleter" << std::endl;
            delete raw_ptr;
        }};
    }
    return 0;
}

