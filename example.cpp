#include<iostream>
using namespace std;
bool greaternumber(int mod1, int mod2, int mod3);
main() {
    int num, mod1, mod2, mod3, div1, div2;
    bool sameorNot;
    cout << "Enter the number: ";
    cin >> num;
    mod1 = num % 10;
    div1 = num / 10;
    mod2 = div1 % 10;
    div2 = div1 / 10;
    mod3 = div2;
    sameorNot = greaternumber(mod1, mod2, mod3);
    if (sameorNot == true) {
        cout << "Yes! The numbers are same";
    }if (sameorNot == false) {
        cout << "No! the numbers are not same";
    }
}
bool greaternumber(int mod1, int mod2, int mod3) {
    if (mod1 == mod2 && mod2 == mod3) {
        return true;
    }
    else {
        return false;
    }
}