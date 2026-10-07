#include <iostream>
#include <string>
using namespace std;

class Laptop
{
private:
    string name;
    double price;
    string processor;

public:
    Laptop(std::string n, double p, std::string proc)
    {
        name = n;
        price = p;
        processor = proc;
    }

    void display() const
    {
        std::cout << "Laptop Name: " << name << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Processor: " << processor << std::endl;
    }
};

int main()
{

    Laptop laptop1("Dell XPS 13", 120050, "Intel i7");
    Laptop laptop2("MacBook Air", 99999, "Apple M2");

    std::cout << "--- Laptop 1 Details ---" << std::endl;
    laptop1.display();

    std::cout << "\n--- Laptop 2 Details ---" << std::endl;
    laptop2.display();

    return 0;
}