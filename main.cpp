// Name: Josh Christensen
// Date: 5/8/2020
// Project: Circle Tester
// Purpose: Make sure circle.h works correctly

#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    // constructors
    circle myFirstCircle; // default constructor

    cout << "Original Area: " << myFirstCircle.Area() << endl; //testing default constructor

    myFirstCircle.SetRadius(5); // testing setRadius method

    cout << "New Area: " << myFirstCircle.Area() << endl; //testing area method

    circle myCopiedCircle = circle(myFirstCircle); // testing copy constructor

    cout << "Copied Circle Area: " << myCopiedCircle.Area() << endl; //testing if radius was copied

    myCopiedCircle.SetRadius(10); //Testing that modifing copy doesn't effect original circle

    cout << "New Copied Circle Area: " << myCopiedCircle.Area() << endl; //Testing that modifing copy doesn't effect original circle
    cout << "Original Circle Area: " << myFirstCircle.Area() << endl; //Testing that modifing copy doesn't effect original circle

    cout << endl << "expected Output: " << endl;
    cout << "Original Area: 0\n"
            "New Area: 78.5398\n"
            "Copied Circle Area: 78.5398\n"
            "New Copied Circle Area: 314.159\n"
            "Original Circle Area: 78.5398";
    return 0;
}