//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <your name> on <current date>
#include <iostream>
using namespace std;
int main()
{


double height   = 0.0;
double radius   = 0.0;
double volume   = 0.0;
const double PI = 3.14;


cout << "Enter the height of the cylinder: ";
cin >> height;
cout << "Enter the radius of the base of the cylinder: ";
cin >> radius;

  
cout << "Height: ";
cout << "Radius: ";
cout << "Volume: ";

volume = PI * radius * radius * height;
cout << volume << endl;

  return 0;



  } //end of main function