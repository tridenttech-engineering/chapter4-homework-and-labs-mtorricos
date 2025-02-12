// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {

   //declare variables
   double balance = 0.0;
   double deposit = 0.0;
   double withdrawal = 0.0;
   double finalBalance = 0.0;
   //enter input items
   cout << "Enter the starting balance: ";
   cin >> balance;

  cout << "Enter the deposit for the month: ";
   cin >> deposit;

  cout << "Enter the withdrawal for the month: ";
   cin >> withdrawal;
  


  finalBalance = (balance + deposit - withdrawal);
   
  cout << "Ending balance: $" << finalBalance << endl;

  return 0;
} // end of main function