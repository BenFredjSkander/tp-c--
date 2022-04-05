#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class vecteur3d
{
public:
    /** Default constructor */
    vecteur3d();
    /** Default destructor */
    virtual ~vecteur3d();

    vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0);

    /** Access x
     * \return The current value of x
     */
    float Getx()
    {
        return x;
    }

    /** Set x
     * \param val New value to set
     */
    void Setx(float val)
    {
        x = val;
    }

    /** Access y
     * \return The current value of y
     */
    float Gety()
    {
        return y;
    }

    /** Set y
     * \param val New value to set
     */
    void Sety(float val)
    {
        y = val;
    }

    /** Access z
     * \return The current value of z
     */
    float Getz()
    {
        return z;
    }

    /** Set z
     * \param val New value to set
     */
    void Setz(float val)
    {
        z = val;
    }

    float x; //!< Member variable "x"
    float y; //!< Member variable "y"
    float z; //!< Member variable "z"

protected:

private:
};

#endif // VECTEUR3D_H
