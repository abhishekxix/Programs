//Returning an object from a function
#include <iostream>

class Example {
	private :
		int a;

	public :
		int get_data();
		void set_data(int x = 0);
};

int Example::get_data() {
	return this->a;
}

void Example::set_data(int x) {
    this->a = x;
}
Example func_return_object() {
	Example e;
	e.set_data(10);
	return e;
}

int main() {
	Example e;
    e.set_data(5);
	std::cout << "The  object e before calling the function that returns an object :: " << e.get_data() << std::endl;
	e = func_return_object();
	std::cout << "The object e after calling the function that returns an object :: " << e.get_data() << std::endl;
	return 0;
}
