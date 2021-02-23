#include <iostream>

using namespace std;

class A {
    public :
        void a() { cout << "Diamond ambiguity resolved.\n";}
};

class B : virtual public A {

};

class C : virtual public A {

};

class D : public B, public C {

};

int main() {
    D object;
    object.a();

    return 0;
}