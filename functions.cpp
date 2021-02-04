#include <iostream>
#include <cmath>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinde(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius and height of the cylinder: ";
    cin >> radius;
    cin >> height;
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinde(radius, height) << endl;
}

void area_circle()
{
    double radius{};
    cout <<"\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}
