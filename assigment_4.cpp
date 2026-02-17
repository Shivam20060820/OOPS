#include<iostream>
using namespace std;

class Animals
{
    public:
    virtual void sound()
    {
        cout<<"This is a parent class"<<endl;
    }
};

class Dogs:public Animals
{
    public:
    void sound()
    {
        cout<<"Dogs bark but dhore bites"<<endl;
    }
};

int main()
{
    Animals a;
    a.sound();
    Dogs d;
    d.sound();
    d.Animals::sound();
    return 0;
}