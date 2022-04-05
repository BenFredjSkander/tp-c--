#include <iostream>
#include "Point.h"

using namespace std;

int i = 0;

Point::Point()
{
    i++;
}

Point::~Point()
{
    //dtor
}


void Point::afficher()
{
    cout<< "abs"<<x<<endl;
    cout<< "ord"<<y<<endl;
    cout<< "total" <<i<<endl;
}

void Point ::deplacer(float a, float b)
{
    x += a;
    y += b;
}
