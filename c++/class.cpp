#include<iostream>
#include<string>

using namespace std;

class Laptop
{
    string name, brand, processor;
    float price;
    
    public:

    void get();
    void show();
};

void Laptop::get()
{
    cout<<"\nEnter the following details ::\nName :: ";
    cin>>name;

    cout<<"\nBrand :: ";
    cin>>brand;

    cout<<"\nProcessor :: ";
    cin>>processor;

    cout<<"\nPrice :: ";
    cin>>price;

}

void Laptop::show()
{
    cout<<endl<<name<<endl<<brand<<endl<<processor<<endl<<"Rs. "<<price<<endl;
}

int main()
{
    Laptop laptop1;
    laptop1.get();
    laptop1.show();
    return 0;
}