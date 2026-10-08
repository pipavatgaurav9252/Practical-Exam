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
        cout << "Laptop Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main()
{

    Laptop laptop1("Dell XPS 13", 120050, "Intel i7");
    Laptop laptop2("MacBook Air", 99999, "Apple M2");

    cout << "--- Laptop 1 Details ---" << endl;
    laptop1.display();

    cout << "\n--- Laptop 2 Details ---" << endl;
    laptop2.display();

    return 0;
}