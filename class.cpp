#include <iostream>
using namespace std;

class Area
{
    float radius,area;
    public:
        
        void Getradius();
        void ComputeArea();
        void Display();
};

void Area::Getradius()
{
    cout <<"Enter the radius of the Circle: ";
    cin >>radius;
}

void Area::ComputeArea()
{
    area = 3.14 * radius * radius;
}

void Area::Display()
{
    cout <<"The Area of the Circle is: "<<area<<endl;
}

int main()
{
    Area a;
    a.Getradius();
    a.ComputeArea();
    a.Display();
    return 0;
}