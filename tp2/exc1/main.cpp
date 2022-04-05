#include <iostream>
#include <Point.h>
using namespace std;

int main()
{
    Point mypoint;
    mypoint.Sety(2);
    mypoint.Setx(5);
    mypoint.afficher();
    mypoint.deplacer(6 , 2);
    mypoint.afficher();
    cout <<endl<< "Hello world!" << endl;
    return 0;
}
