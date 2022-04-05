#include <iostream>
using namespace std ;

int fct (int a)
{
    cout << "fct 1 ";
    return a;
};
int fct (float a)
{
    cout << "fct 2";
    return a;
} ;
void fct (char a, char b) {cout << "fct 3" ;}; // fonction III
void fct (float a , int b) {cout << "fct 4";}; // fonction IV


int main()
{
    int n = 2;
     int p = 6;
    float x, y = 1.5;
    char c = 'B';
    double z = 13.5;
    fct (n, p) ;







    return 0;
}
