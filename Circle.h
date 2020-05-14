// Name: Josh Christensen
// Date: 5/8/2020
// Project: Circle class
// Purpose: represent a circle in code

#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H

#ifndef M_PI
    #define M_PI 3.14159265358979323846 //to get M_PI working
#endif

class circle
{
public:
    // constructors
    circle();                         // default constructor
    circle(const circle &);           // copy constructor

    // member functions
    void   SetRadius(float);
    double Area();

private:
    // data
    float radius;
};

// default constructor
circle::circle()
{
    radius = 0.0;
}

// copy constructor
circle::circle(const circle & Object)
{
    radius = Object.radius;
}

// Method to set the radius of the circle
void circle::SetRadius(float IncomingRadius)
{
    radius = IncomingRadius;
}

// Method to find the area of the circle
double circle::Area()
{
    return(M_PI*radius*radius);
}

#endif //CIRCLE_CIRCLE_H
