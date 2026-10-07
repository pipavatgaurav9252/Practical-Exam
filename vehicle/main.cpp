#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void startEngine()
    {
        cout << "Car Engine Started" << endl;
    }

    void drive()
    {
        cout << "Car is Driving" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void startEngine()
    {
        cout << "Bike Engine Started" << endl;
    }

    void drive()
    {
        cout << "Bike is Driving" << endl;
    }
};

int main()
{
    Vehicle *vehicles[100];

    Car c;
    Bike b;

    vehicles[0] = &c;
    vehicles[1] = &b;

    vehicles[0]->startEngine();
    vehicles[0]->drive();

    vehicles[1]->startEngine();
    vehicles[1]->drive();

    return 0;
}