#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        virtual ~Point();

        void deplacer(float a, float b);

        float Getx() { return x; }
        void Setx(float val) { x = val; }
        float Gety() { return y; }
        void Sety(float val) { y = val; }
        void afficher();

    protected:

    private:
        float x;
        float y;
};

#endif // POINT_H
