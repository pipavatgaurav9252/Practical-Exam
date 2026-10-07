#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void displayDetails()
    {
        cout << "This is Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void displayDetails() override
    {
        cout << "This is Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void displayDetails() override
    {
        cout << "This is Rectangle" << endl;
    }
};

int main()
{
    Shape *shapes[100];

    Circle c;
    Rectangle r;

    shapes[0] = &c;
    shapes[1] = &r;

    shapes[0]->displayDetails();
    shapes[1]->displayDetails();

    return 0;
}