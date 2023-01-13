#include<iostream>
using namespace std;
float checkPost(string product, string city, int quantity);
main() {
  string product, city;
  int quantity;
  cout << "Enter the product: ";
  cin >> product;
  cout << "Enter the city: ";
  cin >> city;
  cout << "Enter the quantity: ";
  cin >> quantity;
  float totalPrice = checkPost(product, city, quantity);
  cout << totalPrice;
}
float checkPost(string product, string city, int quantity) {
  float productPrice;
  if (product == "coffee") {
    if (city == "sofia") {
      productPrice = 0.50;
    }
    else if (city == "plovdiv") {
      productPrice = 0.40;
    }
    else if (city == "varna") {
      productPrice = 0.45;
    }
  }
  if (product == "water") {
    if (city == "sofia") {
      productPrice = 0.80;
    }
    else if (city == "plovdiv") {
      productPrice = 0.70;
    }
    else if (city == "varna") {
      productPrice = 0.70;
    }
  }
  if (product == "beer") {
    if (city == "sofia") {
      productPrice = 1.20;
    }
    else if (city == "plovdiv") {
      productPrice = 1.15;
    }
    else if (city == "varna") {
      productPrice = 1.10;
    }
  }
  if (product == "sweets") {
    if (city == "sofia") {
      productPrice = 1.45;
    }
    else if (city == "plovdiv") {
      productPrice = 1.30;
    }
    else if (city == "varna") {
      productPrice = 1.35;
    }
  }
  if (product == "peanuts") {
    if (city == "sofia") {
      productPrice = 1.60;
    }
    else if (city == "plovdiv") {
      productPrice = 1.50;
    }
    else if (city == "varna") {
      productPrice = 1.55;
    }
  }
  float totalPrice = productPrice * quantity;
  return totalPrice;
}