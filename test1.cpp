#include<iostream>
using namespace std;
int isgreatest(int num1,int num2,int num3);
main(){
    int num1,num2,num3,greater;
    cout << "Enter the number: ";
    cin >> num1;
    cout << "Enter the number: ";
    cin >> num2;
    cout << "Enter the number: ";
    cin >> num3;
   greater = isgreatest(num1,num2,num3);
   cout << "The greatest number is "<< greater;
}
int isgreatest(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
       return num1;
    }else if(num2>num1 && num2>num3){
       return num2;
    }else if(num3>num1 && num3>num2){
        return num3;
    }else{
        return num1;
    }
    return 0;
}