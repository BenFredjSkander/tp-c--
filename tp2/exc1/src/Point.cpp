#include <iostream>
#include "Point.h"
using namespace std;
Point::Point()
{
    //ctor
}

Point::~Point()
{
    //dtor
}

void Point::afficher(){
    cout<< "abs"<<x<<endl;
    cout<< "ord"<<y<<endl;
}

void Point ::deplacer(float a, float b){
           	x += a;
           	y += b;
        }
