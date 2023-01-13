#include <iostream>
#include<cmath>
using namespace std;
int yearCheck(string year, int number_of_holidays, int number_of_weekendHome);
main()
{
    string year;
    int number_of_holidays, number_of_weekendsHome;
    int volleyball_played_throughoutYear;
    cout << "Enter the year is leap or normal: ";
    cin >> year;
    cout << "Enter the number of holidays in year: ";
    cin >> number_of_holidays;
    cout << "Enter the number of weekends when he is in hometown: ";
    cin >> number_of_weekendsHome;
    volleyball_played_throughoutYear = yearCheck(year, number_of_holidays, number_of_weekendsHome);
    cout << volleyball_played_throughoutYear;
}
int yearCheck(string year, int number_of_holidays, int number_of_weekendHome)
{
    float total = 0;
    if (year == "normal") {
        total = (48 - number_of_weekendHome) * (3 / 4.0) + (2 / 3.0) * number_of_holidays + number_of_weekendHome;
    }
    else if (year == "leap") {
        float result = (48 - number_of_weekendHome) * (3 / 4.0) + (2 / 3.0) * number_of_holidays + number_of_weekendHome;
        float discount = result * 15 / 100.0;
        total = result + discount;
    }
    return total;
}