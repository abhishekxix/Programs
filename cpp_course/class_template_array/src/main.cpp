#include <iostream>
#include <string>

/* 
    Note: Since C++ 11, the STL has std::array  which is a template based array class.
    Use std::array instead of raw arrays whenever possible.

    Note that we can have non-type template parameters.
    That is what N is in this case.
*/
template <typename Type, int N>
class Array 
{
    private :
        int size {N};   //how do we get the N?
        Type values[N];  //The N needs to be known at compile time

        friend std::ostream &operator<<(std::ostream &out, const Array<Type, N> &arr)
        {
            out << "[ ";
            for(const auto &value : arr.values)
                out << value << " ";
            out << "]";
            
            return out;
        }
    public :
        Array() = default;
        Array(Type init_val)
        {
            for(auto &value : this->values)
                value = init_val;
        }

        void fill(Type val)
        {
            for(auto &value : this->values)
                value = val;
        }

        int get_size() const
        {
            return this->size;
        }

        //overloaded subscript operator
        Type &operator[](int index)
        {
            return this->values[index];
        }
};

int main() 
{
    Array<int, 5> nums;
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << nums << std::endl;

    nums[0] = 100;
    nums[3] = 200;
    std::cout << nums << std::endl;

    Array<int, 100> nums2(1);
    std::cout << "The size of nums2 is " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings(std::string {"Abhishek"});
    std::cout << "The size of strings is " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    strings[0] = std::string {"Larry"};
    // strings[0] = "Larry"; /* The typing would be wrong */
    std::cout << strings << std::endl;
    strings.fill("X");
    std::cout << strings << std::endl;
    return 0;
}