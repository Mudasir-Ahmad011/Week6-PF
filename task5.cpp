#include<iostream>
using namespace std;
float totalincome(string type_screen,int rows,int columns);
main(){
    int rows,columns;
    string type_screen;
    float total;
    cout << "Enter the screen type: ";
    cin >> type_screen;
    cout << "Enter the rows: ";
    cin >> rows;
    cout << "Enter the columns: ";
    cin >> columns;
   total = totalincome(type_screen,rows,columns);
   cout << "The total incomme they  earn is: " << total;
}
float totalincome(string type_screen,int rows,int columns){
    float priceEachTicket,totalincome;
    if(type_screen == "Premiere"){
      priceEachTicket = 12.00;
      totalincome = rows * columns * priceEachTicket;
    }else if(type_screen == "Normal"){
        priceEachTicket = 7.50;
        totalincome = rows * columns * priceEachTicket;
    }else if(type_screen == "Discount"){
        priceEachTicket = 5.00;
        totalincome = rows * columns * priceEachTicket;
    }
    return totalincome;
}