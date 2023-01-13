#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
main()
{
    float amount, discountis;
    string month, day;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the amount of purchased item: ";
    cin >> amount;
    discountis = discount(day, month, amount);
    cout << "The prize of purchased item is: " << discountis;
}
float discount(string day, string month, float amount)
{
    float discountis;
    if(day == "Sunday" && month == "October"){
        discountis = amount - (amount*10)/100;
    }else if(day == "Monday" && (month == "November" || month == "December")){
        discountis = amount - (amount*5)/100;
    }else{
        discountis = amount;
    }
       
    return discountis;
}