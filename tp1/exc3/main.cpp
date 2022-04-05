#include <iostream>

using namespace std;

int main()
{

    int t[3] [4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int a[7];
    int i,j, k;
    int sum;
    int sum_ptr;
    int *ptr;
    /*
    for (j = 0; j<4 ; j++)
    {
        for (i = 0 ; i<3; i++)
        {
            cout <<"Enter item "<< i<<"**"<<j <<": ";
            cin >> t[i][j];
            sum =+ t[i][j];
        }
    }
    cout << "somme tab "<< sum << endl;
    */

    cout << "hello" <<endl;
    ptr = (int *)t;
    for (k = 0; k<12 ; k++)
    {

        sum_ptr += *(ptr + k);

    }
    cout << "somme pointeur "<<sum_ptr << endl;
    return 0;
}
