#ifndef POINT_H
#define POINT_H


class Point
{
    float x, y ;

public :
    Point();
    virtual ~Point();

    void deplacer(float a, float b);

    float Getx()
    {
        return x;
    }
    void Setx(float val)
    {
        x = val;
    }
    float Gety()
    {
        return y;
    }
    void Sety(float val)
    {
        y = val;
    }
    void afficher();

};

#endif // POINT_H
