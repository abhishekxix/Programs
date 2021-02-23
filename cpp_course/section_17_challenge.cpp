#include <iostream>
#include <memory>
#include <vector>

class Test
{
    private :
        int data;

    public :
        Test(int data = 0) : data {data} {std::cout << "\tTest constructor(" << data << ")" << std::endl;}
        int get_data() {return data;}
        ~Test() {std::cout << "Test destructor(" << data << ")" << std::endl;}
};

//Function prototypes
auto make();    // std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);
auto make()
{
    return std::make_unique<std::vector<std::shared_ptr<Test>>> ();
}

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    size_t num;
    std::cout << "How many data points do you want to enter? :: ";
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num)
{
    int entry {};
    for(size_t position {}; position < num; position++)
    {
        std::cout << "Enter the data point " << position + 1 << " :: ";
        std::cin >> entry; 
        vec.push_back(std::make_shared<Test>(entry));   //an r-value ref will be created and moved to the vector.
    }
}
void display(const std::vector<std::shared_ptr<Test>> &vec)
{
    std::cout << "\nDisplaying vector data :: " << std::endl
              << "===================================" << std::endl;
    for(const auto &data_element_pointer : vec)
    {
        std::cout << data_element_pointer->get_data() << std::endl;
    }
    std::cout << "===================================" << std::endl;
}