#include <iostream>
#include <Point.h>
using namespace std;

int main()
{
    Point mypoint;
    mypoint.Sety(2);
    mypoint.Setx(5);

    mypoint.afficher();

    Point hh;
    hh.Setx(3);
    hh.Sety(7);
    hh.afficher();
    mypoint.afficher();
    cout << "Hello world!" << endl;
    return 0;
}
