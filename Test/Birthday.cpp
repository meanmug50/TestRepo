#include "Birthday.h"
#include <iostream>
#include "math.h"

using namespace std;

Birthday::Birthday(int m, int d, int y)
:   month(m),
    day(d),
    year(y)
{
    //empty constructor
}

void Birthday::printDate()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Birthday::printTime()
{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
