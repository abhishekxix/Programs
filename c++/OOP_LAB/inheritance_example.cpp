#include <iostream>
#include <string>

class Quadrilateral {
    protected :
        std::string name;
        int area;
        int perimeter;
    
    public :
        Quadrilateral(std::string name);
};

class Square : public Quadrilateral {
    private :
        int side_length;
    
    public :
        Square(std::string name = "UNNAMED", int side_length = 0);
        void display() {
            std::cout << "Area = " << area << '\n'
                      << "Perimeter = " << perimeter << '\n'
                      << "Name = " << name << std::endl;
        }
};

Quadrilateral::Quadrilateral(std::string name)
    : name {name}, area {0}, perimeter {0}
{}

Square::Square(std::string name, int side_length) 
    : Quadrilateral {name}, side_length {side_length} {
        area = side_length * side_length;
        perimeter = 4 * side_length;
}

int main() {
    Square a {"Square1", 14};
    a.display();
}