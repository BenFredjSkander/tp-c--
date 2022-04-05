#include <iostream>
using namespace std ;
class point
{
    int x, y ;
public :
    point ()
    {
        x=0 ;
        y=0 ;
        cout<< "** constructeur 0 argument\n" ;
    }
    point (int abs)
    {
        x=abs ;
        y=0 ;
        cout<< "** constructeur 1 argument\n" ;
    }
    point (int abs, int ord)
    {
        x=abs ;
        y=ord ;
        cout<< "** constructeur 2 arguments\n" ;
    }
    point (const point & p)
    {
        x=p.x ;
        y=p.y ;
        cout<< "**constructeur par recopie\n" ;
    }
    void affiche ()
    {
        cout<< "point de coordonnees : " << x << " " << y << "\n" ;
    }
} ;
main()
{
    point a(10,20) ;
    point b(30,40) ;
    point courbe[6] = { 4, a, 0, b} ;
    for (int i=0 ; i<6 ; i++) courbe[i].affiche() ;
}
