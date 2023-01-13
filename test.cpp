#include <iostream>
using namespace std;
main()
{
    int roll_number;
    string name;
    cout << "Enter the roll number: ";
    cin >> roll_number;
    cout << "Enter name:  ";
    cin >> name;
    if (roll_number == 501)
    {
        if (name == "Ali")
        {
            cout << "congratulation";
        }
    }
    else
    {
        cout << "try again";
    }
}