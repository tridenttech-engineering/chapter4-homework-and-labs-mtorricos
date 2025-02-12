// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double small = 0.0;
  double medium = 0.0; 
  double large = 0.0;
  double family = 0.0;
  double total = 0.0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;
  cout << "Number of small pizzas sold: ";
  cin >> small;
  cout << "Number of medium pizzas sold: ";
  cin >> medium;
  cout << "Number of large pizzas sold: ";
  cin >> large;
  cout << "Number of family pizzas sold: ";
  cin >> family;
  total = small + medium + large + family;
  smallPercent = small / total * 100;
  mediumPercent = medium / total * 100;
  largePercent = large / total * 100;
  familyPercent = family / total * 100;
  cout << "Total pizzas sold: " << total << endl;
  cout << "Small pizzas sold: " << small << endl;
  cout << "Medium pizzas sold: " << medium << endl;
  cout << "Large pizzas sold: " << large << endl;
  cout << "Family pizzas sold: " << family << endl;
  cout << "Small pizzas sold: " << smallPercent << "%" << endl;
  cout << "Medium pizzas sold: " << mediumPercent << "%" << endl;
  cout << "Large pizzas sold: " << largePercent << "%" << endl;
  cout << "Family pizzas sold: " << familyPercent << "%" << endl;
  

  return 0;
} // end of main function