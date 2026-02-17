#include<iostream>
using namespace std;

class Shape 
{
    public:
    virtual void drawing()
    {
        cout<<"Here is a drawing"<<endl;
    }
};

class Circle:public Shape
{
    public:
    void drawing()
    {
        cout<<"This is a Circle"<<endl;
    }
};

class Rectangle:public Shape
{
    public:
    void drawing()
    {
        cout<<"This is a Rectangle"<<endl;
    }
};

int main()
{
    class Shape s;
    s.drawing();
    class Circle c;
    c.drawing();
    class Rectangle r;
    r.drawing();
}