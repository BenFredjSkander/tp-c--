#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,x;
    cout << "Type the length of the table" <<endl;
    cin >> n;

    int *arr = new int(n);
    int *arrsqr = new int(n);

    //fill the array with int
    for(x = 0; x<n ; x++)
    {
        cout <<"Enter item "<< x+1 <<": ";
        cin >> arr[x];
    }

    // fill the second table with the sqr of the element of the first table
    for(x=0; x<n; x++)
    {
        int pow_var = pow (arr[x], 2);
        arrsqr [x] = pow_var;
    }


    //print the element of the array
    for(x=0; x<n; x++)
    {
        cout << arr[x] << " ";
    }
    cout << endl<< "****************" << endl;

    for(x=0; x<n; x++)
    {
        cout << arrsqr[x] << " ";
    }
    return 0;
}
