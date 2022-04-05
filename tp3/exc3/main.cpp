#include <iostream>
#include <vecteur3d.h>
using namespace std;

float operator[](const vecteur3d &v1, const vecteur3d &v2){
    vecteur3d res(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);

    return res;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
