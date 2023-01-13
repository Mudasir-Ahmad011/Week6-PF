#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string name_respect;
    cout << "Enter  gender: ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;
    name_respect = checkTitle(age, gender);
    cout << name_respect;
}
string checkTitle(int age, char gender)
{
    string name;
    if (gender == 'm' && age >= 16)
    {
        name = "Mr.";
    }
    else if (gender == 'm' && age < 16)
    {
        name = "Master";
    }
    else if (gender == 'f' && age >= 16)
    {
        name = "Ms.";
    }
    else if (gender == 'f' && age < 16)
    {
        name = "Miss";
    }
    return name;
}