#include <iostream>
#include <cmath>

using namespace std;

class Points
{
public:

    Points() {
        //Constructor created to do the Rectangle Check.**ASK SIR ABOUT THIS**
    }

    float getLength() const {
        return length;
    }

    void setLength(float length) {
        Points::length = length;
    }

    const string &getResult() const {
        return result;
    }

    void setResult(const string &result) {
        Points::result = result;
    }


    Points (float x1, float x2, float y1, float y2)
    {
        length = (x2-x1)+(y2-y1);
        length = sqrt(length);
    };

    string Rectangle (float M, float U, float F, float C)
    {
        string result;
        if (M == U && F == C)
        {
            result = "The points make a Rectangle. Proceeding with Solution...";
        }

        else if ( M == F && U == C)
        {
            result = "The points make a Rectangle. Proceeding with Solution...";
        }

        else if ( M == C && U == F)
        {
            result = "The points make a Rectangle. Proceeding with Solution...";
        }
        else result = "The points do not make a Rectangle. Exiting...";

        return result;
    };




private:
    float length;
    string result;
};

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

    void draw (float M, float U)
    {
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < U; ++j) {

                cout<<"_";

            }
        }
    }


private :
    float length;
    float width;
};


int main ()
{
    Points L1 (2, 6, 5, 10);
    Points L2 (1, 10, 8, 15);
    Points L3 (2, 6, 5, 10);
    Points L4(1, 10, 8, 15);

    Points Res;
    Res.Rectangle(L1.getLength(), L2.getLength(), L3.getLength(), L4.getLength());
    cout<<Res.Rectangle(L1.getLength(), L2.getLength(), L3.getLength(), L4.getLength());

    if (L1.getLength() == L2.getLength())
    {
        Rectangle define(L2.getLength(), L3.getLength());
        cout<<endl<<"The Length of triangle is : "<<define.getlength()<<endl;
        cout<<"The Width of the triangle is : "<<define.getwidth()<<endl;
        cout<<"The Area of the triangle is : "<<define.area()<<endl;
        cout<<"The Perimeter of the triangle is : "<<define.perimeter()<<endl;
    }
    else if (L1.getLength() == L3.getLength())

    {
        Rectangle define(L1.getLength(), L2.getLength());
        cout<<endl<<"The Length of triangle is : "<<define.getlength()<<endl;
        cout<<"The Width of the triangle is : "<<define.getwidth()<<endl;
        cout<<"The Area of the triangle is : "<<define.area()<<endl;
        cout<<"The Perimeter of the triangle is : "<<define.perimeter()<<endl;

        define.draw(L1.getLength(), L2.getLength());
    }

    else if (L1.getLength() == L4.getLength())
    {
        Rectangle define(L3.getLength(), L4.getLength());
        cout<<endl<<"The Length of triangle is : "<<define.getlength()<<endl;
        cout<<"The Width of the triangle is : "<<define.getwidth()<<endl;
        cout<<"The Area of the triangle is : "<<define.area()<<endl;
        cout<<"The Perimeter of the triangle is : "<<define.perimeter()<<endl;
    }

}
