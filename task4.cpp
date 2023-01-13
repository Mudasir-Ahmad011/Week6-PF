#include<iostream>
using namespace std;
string checkSpeed(float speed);
main(){
    float speed;
    string speed_info;
    cout << "Enter speed: ";
    cin >> speed;
    speed_info = checkSpeed(speed);
    cout << speed_info;
}
string checkSpeed(float speed){
    string speed_info;
    if(speed <= 10){
        speed_info = "slow";
    }else if(speed >10 && speed <=50){
        speed_info = "average";
    }else if(speed >50 && speed <=150){
        speed_info = "fast";
    }else if(speed >150 && speed <=1000){
        speed_info = "ultra-fast";
    }else{
        speed_info = "extremely fast";
    }
    return speed_info;
}