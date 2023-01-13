#include<iostream>
#include<cmath>
using namespace std;
double transportpercentage(int people);
main() {
    int budget;
    string category;
    int people;
    double VIPprice = 499.99;
    double normalprice = 249.99;
    double transportPercentage;
    double transportBudget;
    double remainingBudget;
    double totalprice;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category: ";
    cin >> category;
    cout << "Enter the number of people: ";
    cin >> people;
    transportPercentage = transportpercentage(people);

    if (category == "vip") {
        transportBudget = (transportPercentage / 100.0) * budget;
        remainingBudget = (people * VIPprice) + transportBudget;
    }
    if (category == "normal") {
        transportBudget = (transportPercentage / 100.0) * budget;
        remainingBudget = (people * normalprice) + transportBudget;
    }
    totalprice = budget - remainingBudget;
    if (totalprice < 0) {
        cout << "Not enough money! You need " << abs(totalprice) << endl;
    }if (totalprice > 0) {
        cout << "Yes! You have " << abs(totalprice) << "QR left" << endl;
    }


}
double transportpercentage(int people) {
    double transportPercentage;
    if (people > 0 && people <= 4) {
        transportPercentage = 75;
    }
    else if (people > 5 && people <= 9) {
        transportPercentage = 60;
    }
    else if (people > 10 && people <= 24) {
        transportPercentage = 50;
    }
    else if (people > 25 && people <= 49) {
        transportPercentage = 40;
    }
    else if (people >= 50) {
        transportPercentage = 25;
    }
    return transportPercentage;
}