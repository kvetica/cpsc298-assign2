// assignment 2, problem 3
// addTax function, two formal parameters:
// taxRate (float) - amount of sales tax expressed as percent
// cost (float) - cost of item before tax
// returns float value, cost including tax

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
  taxRate = taxRate/100; // converting into decimal for math
  float taxVal = cost * taxRate; // taxed amount to deduce from cost
  float finalCost = cost - taxVal;
  return finalCost;
}

int main(int argc, char ** argv){
  float userTaxRate;
  float userCost;

  cout << "Enter tax as percentage w/o % (XX%): ";
  cin >> userTaxRate;
  cout << "Enter cost before tax: ";
  cin >> userCost;

  cout << "Cost including tax: $" << addTax(userTaxRate, userCost) << endl;

  return 0;
}
