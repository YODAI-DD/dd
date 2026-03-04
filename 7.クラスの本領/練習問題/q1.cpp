#include <iostream>
using namespace std;

class Base 
{
public:
    virtual void show() 
    {
        cout << "Base" << endl; 
    }
};

class Derived : public Base 
{
public:
    void show() override 
    {
        cout << "Derived" << endl; 
    }
};

int main() 
{
    Derived d;
    Base* bp = &d;
    Base& br = d;
    Base  b = d;   // ← ここに注目

    bp->show();
    br.show();
    b.show();
}