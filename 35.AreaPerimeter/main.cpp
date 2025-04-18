#include <iostream>
#include <cmath>

/*
Calculate Area/Perimeter of Circle, Rectangle and Triangle
*/

using namespace std;

class Triangle
{
public:
    float a;
    float b;
    float c;

    Triangle(float sideA, float sideB, float sideC)
    {
        a = sideA;
        b = sideB;
        c = sideC;
    }

    float perimeter() const
    {
        return a + b + c;
    }

    float area() const
    {
        float p = this->perimeter() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

class Rectangle
{
public:
    float a;
    float b;

    Rectangle(float sideA, float sideB)
    {
        a = sideA;
        b = sideB;
    }

    float perimeter()
    {
        return 2 * (a + b);
    }

    float area()
    {
        return a * b;
    }
};

class Circle
{
public:
    float radius;

    Circle(float circleRadius)
    {
        radius = circleRadius;
    }

    float length()
    {
        return 2 * radius * 3.14;
    }

    float area()
    {
        return 3.14 * pow(radius, 2);
    }
};

int main(void)
{
    Triangle triangle(4, 3, 5);
    cout << "====== Triangle" << endl;
    cout << triangle.a << " " << triangle.b << " " << triangle.c << endl;
    cout << "Perimeter: " << triangle.perimeter() << endl;
    cout << "Area: " << triangle.area() << endl;

    Rectangle rect(8, 10);
    cout << endl
         << "====== Rectangle" << endl;
    cout << rect.a << " " << rect.b << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    cout << "Area: " << rect.area() << endl;

    Circle circle(10);
    cout << endl
         << "====== Circle" << endl;
    cout << circle.radius << endl;
    cout << "Length: " << circle.length() << endl;
    cout << "Area: " << circle.area() << endl;

    return 0;
}
