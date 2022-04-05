#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date(int day, int month, int year);
    virtual ~Date();
    Date();
    int Getyear()
    {
        return year;
    }
    void Setyear(int val)
    {
        year = val;
    }
    int Getmonth()
    {
        return month;
    }
    void Setmonth(int val)
    {
        month = val;
    }
    int Getday()
    {
        return day;
    }
    void Setday(int val)
    {
        day = val;
    }
    int year;
    int month;
    int day;


protected:

private:

};



#endif // DATE_H
