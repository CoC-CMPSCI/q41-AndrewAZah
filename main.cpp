#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO

    if (choice == 1){
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * pow(radius, 2);
    } else if (choice == 2){
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the height of the rectangle: ";
    } else if (choice == 3){
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        area = 0.5 * base * height;
    } else if (choice == 4){
        cout << "Program Stopped";
    } else {
        cout << "Wrong number";
    }
    
    if ((choice >= 1) && (choice <= 3)){
        cout << left << setprecision(2) << fixed;
        cout << "The area is " << area << endl;
    }

    return 0;
}
