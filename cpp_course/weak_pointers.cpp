#include <iostream>
#include <memory>

class B;    //forward declaration

class A
{
    std::shared_ptr<B> b_ptr;   //make weak to break the strong circular reference relationship
    
    public :
        void set_b(std::shared_ptr<B> &b)
        {
            b_ptr = b;
        }

        A() {std::cout << "A constructor" << std::endl;}
        ~A() {std::cout << "A destructor" << std::endl;}
};

class B
{
    std::weak_ptr<A> a_ptr;

    public :
        void set_a(std::shared_ptr<A> &a)
        {
            a_ptr = a;
        }
        B() {std::cout << "B constructor" << std::endl;}
        ~B() {std::cout << "B destructor" << std::endl;}
};

int main()
{
    std::shared_ptr<A> a = std::make_shared<A> ();
    std::shared_ptr<B> b = std::make_shared<B> ();
    a->set_b(b);
    b->set_a(a);

    return 0;
}