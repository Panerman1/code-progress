#include <iostream>
using namespace std;

class Circle
{
    private:
        float rad;
    public:
        Circle(float radius);
        ~Circle();
        float Getradius();
        float ComputeArea();
        void Display();
};

Circle::Circle(float radius)
{
    this->rad = radius;
    cout << "Circle object at " << this << " has been created!" << endl;
}
Circle::~Circle()
{
    cout << "Circle object at " << this << " has been destroyed!" << endl;
}

float Circle::Getradius()
{
    return (this->rad);
}

float Circle::ComputeArea()
{
   return (3.14 * this->rad * this->rad);
}

int main()
{
    float radius,area;
    Circle *a;

    cout <<"Enter the radius of the Circle: ";
    cin >>radius;

    a = new Circle(radius);
    cout <<"Radius is initialized to "<< a->Getradius() << endl;
    area = a->ComputeArea();
    delete a;
    cout << "The Circle of the Circle is: " << area << endl;
    return 0;
}