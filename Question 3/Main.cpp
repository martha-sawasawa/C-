#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
using namespace shapes;

int main() {
    while (true) {
        cout <<"Select your choice: \n"
             <<"1. Calculate the area of a square\n"
             <<"2. Calculate the area of a triangle\n"
             <<"3. Calculate the area of a circle\n"
             <<"4. Quit\n"
        int choice;
        cin >> choice;

        if(choice = 1) {
            double side length;
            cout <<"Enter the side length of the square: " <<endl;
            cin >> side length

            shapes::Square square(sideLength);
            cout <<"The area of the square is: " <<Area::calculateSquareArea(square) <<endl;

            else if(choice = 2) {
                double base, height;
                cout <<"Enter base of the triangle: " <<endl;
                cin >> base;
                cout <<"Enter height of the triangle: " <<endl;
                cin >> height;

                shapes::Triangle triangle(base, height);
                cout <<"The area of the triangle is: " <<Area::calculateTriangleArea(triangle) <<endl;

                else(choice = 3) {
                    double radius;
                    cout <<"Enter the radius of the circle: " <<endl;
                    cin >> radius;

                    shapes::Circle circle(radius);
                    cout <<"The area of the circle is: " <<Area::calculateCircleArea(circle) <<endl;
                }
            }
        }

    }
    return 0;
}
    
        


    