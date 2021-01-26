// assignment 2, problem 4
// read a length in feet and inches, convert to meters and centimeters
// Three functions:
// - one for input
// - one or more for calculating
// - one or more for output (console)
// include loop to let user repeat computation until user says 'Exit'
// 0.3048 meters = 1 foot
// 100 centimeters = 1 meter
// 12 inches = 1 foot

#include <iostream>
#include <string>
using namespace std;

double getLengthInInches(){ // user inputted feet and inches
  double userFeet;
  double userInches;
  cout << "Enter feet: ";
  cin >> userFeet;
  cout << "Enter inches: ";
  cin >> userInches;

  double totalInches = (userFeet * 12) + userInches;
  // converting feet to inches for conversion to meters later

  return totalInches;
}

double convertToCentimeters(double lengthInInches){ // converting to cm
  double lenCentimeters;
  lenCentimeters = lengthInInches * 2.54; // inches to cm conversion

  return lenCentimeters;
}

int getMeters(double lengthInCentimeters){ // converting cm to meters
  // 100 centimeters in 1 meter
  int meters = lengthInCentimeters / 100;
  return meters;
}

int getCentimeters(double totalCm, int meters){ // getting remaining cms from meters conversion
  int lengthCenti;
  int totalMeters = meters * 100;
  lengthCenti = totalCm - totalMeters; // total cm minus centimeters from whole meters
  return lengthCenti;
}

int returnFeet(double totalInches){ // getting feet back from inches conversion
  int feet;
  feet = totalInches / 12;
  return feet;
}

int returnInches(double totalInches, int totalFeet){ // getting inches from feet
  int inches;
  int feet = totalFeet * 12;
  inches = totalInches - feet;
  return inches;
}

void printAll(int lenFeet, int lenInches, int lenMeters, int lenCentimeters){
  // print lengths 
  cout << "Length in feet: " << lenFeet << " feet, " << lenInches << " in."<< endl;
  cout << "Length in meters: " << lenMeters << " meters, " << lenCentimeters << " cm."<< endl;
}


int main(){

  string repeatLoop = "Yes";
  while (repeatLoop != "Exit"){
    double userLength = getLengthInInches();
    double totalCentimeters = convertToCentimeters(userLength);
    int lengthInMeters = getMeters(totalCentimeters);
    int lengthInCentimeters = getCentimeters(totalCentimeters, lengthInMeters);
    int userFeet = returnFeet(userLength);
    int userInches = returnInches(userLength, userFeet);
    // ^ getting all the values for different lengths

    printAll(userFeet, userInches, lengthInMeters, lengthInCentimeters);

    cout << "Enter 'Yes' to continue or 'Exit' to terminate: ";
    cin >> repeatLoop;
  }


  return 0;
}
