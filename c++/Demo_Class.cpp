#include <iostream>
#include <string>

class Demo {
    private :
        int integer_data;
        std::string string_data;
    
    public :
        Demo(int integer_data = 0, std::string string_data = "NO_DATA"); //function created.
        void display(); //display function
};

Demo::Demo(int integer_data, std::string string_data)   //constructor 
    : integer_data {integer_data}, string_data {string_data}
{}

void Demo::display() {
    std::cout << "Integer data argument :: " << this->integer_data << std::endl
              << "String data argument :: " << this->string_data << std::endl;
}

int main () {
    Demo demo_object {110, "DEMO"};
    demo_object.display();

    return 0;
}