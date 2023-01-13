#include<iostream>
using namespace std;
float lowestPrice(int kilometers, string day);
main() {
    int kilometers;
    string day;
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;
    cout << "Enter the day or night: ";
    cin >> day;
    float cheapPrice = lowestPrice(kilometers, day);
    cout << cheapPrice;
}
float lowestPrice(int kilometers, string day) {
    float total = 0;
    if (kilometers < 20 && day == "day") {
        float starting_fee = 0.70;
        float day_rate = 0.79;
        total = day_rate * kilometers + starting_fee;
    }
    else if (kilometers < 20 && day == "night") {
        float starting_fee = 0.70;
        float night_rate = 0.90;
        total = night_rate * kilometers + starting_fee;
    }
    else if (kilometers >= 20 && kilometers < 100) {
        float rate = 0.09;
        total = kilometers * rate;
    }
    else if (kilometers >= 100) {
        float rate = 0.06;
        total = kilometers * rate;
    }
    return total;
}