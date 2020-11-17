#include <iostream>
using namespace std;

class Rectangle
{
public :
    void setlength(float l) {
        if (l > 0.0 && l < 20.0) {
            length = l;
        }
        else length = 1;
    }

    float getlength() {
        return length;
    }

    void setwidth(float w) {
        if (w > 0.0 && w < 20.0)
            width = w;
        else width = 1;
    }

    float getwidth() {
        return width;
    }

    Rectangle()
    {
        length = 1;
        width = 1;
    }

    Rectangle(float w, float l)
    {
        setlength(l);
        setwidth(w);
    }

    float area ()
    {
        return getlength() * getwidth();
    }

    float perimeter ()
    {
        return 2*(getlength() + getwidth());
    }

private :
    float length;
    float width;
};


int main ()
{
    Rectangle define(4.5, 16.7);
    cout<<"The Length of triangle is : "<<define.getlength()<<endl;
    cout<<"The Width of the triangle is : "<<define.getwidth()<<endl;
    cout<<"The Area of the triangle is : "<<define.area()<<endl;
    cout<<"The Perimeter of the triangle is : "<<define.perimeter()<<endl;
}

