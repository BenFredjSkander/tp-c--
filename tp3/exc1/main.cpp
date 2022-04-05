#include <iostream>
#include <Date.h>
#define skander std::cout

std::ostream& operator<<(std::ostream &s, const Date &date) {
    return skander << "(" << date.day << "/" << date.month << "/" << date.year << ")";
}

int main()
{
    Date dt(1,2,92);


    skander << dt << "\n";

    return 0;
}
