#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class vecteur3d
{
    float v[3];
public:
    vecteur3d(float c1=0.0, float c2=0.0, float c3=0.0)
    {
        v[0] = c1;
        v[1] = c2;
        v[2] = c3;
    }
};
#endif // VECTEUR3D_H
