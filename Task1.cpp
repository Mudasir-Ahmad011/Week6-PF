#include <iostream>
using namespace std;
char grade(int num);
main()
{
    int num;
    char gradeis;
    cout << "Enter the marks obtained: ";
    cin >> num;
    gradeis = grade(num);
    cout << gradeis;
}
char grade(int num)
{
    char grade;
    if (num > 85)
    {
        grade = 'A';
    }
    else if (num >= 81 && num <= 85)
    {
        grade = 'B';
    }
    else if (num >= 71 && num <= 80)
    {
        grade = 'C';
    }
    else if (num >= 61 && num <= 70)
    {
        grade = 'D';
    }
    else if (num >= 50 && num <= 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}