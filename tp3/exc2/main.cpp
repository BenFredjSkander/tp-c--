#include <iostream>
#include <vecteur3d.h>
using namespace std;

vecteur3d operator+(const vecteur3d &v1, const vecteur3d &v2){
    vecteur3d res(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);

    return res;
}

vecteur3d operator*(const vecteur3d &v1, const vecteur3d &v2){
    vecteur3d res(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);

    return res;
}

std::ostream& operator<<(std::ostream &s, const vecteur3d &vecteur) {
    return std::cout << "(" << vecteur.x << "/" << vecteur.y << "/" << vecteur.z << ")";
}

int main()
{
    vecteur3d v1(1.1,2.2,3.3);
    vecteur3d v2(1.1,2.2,4.3);

    vecteur3d add = v1+v2;
    vecteur3d mult = v1*v2;

    std::cout << add << endl;
    std::cout << mult << endl;
    return 0;
}
