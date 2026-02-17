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
    Shape *s;
    // s.drawing();
    Circle c;
    s=&c;   //stored the address of object of class circle c; and then called it through the pointer of base class
    c.drawing();
    s->drawing();
    class Rectangle r;
    s=&r;
    r.drawing();
    s->drawing();
    // Shape s1;
    // Rectangle *r1;// cannot access base class from the pointer of rectangle
    // r1=&s1;

}