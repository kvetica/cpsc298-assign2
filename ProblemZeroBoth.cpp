// assignment 2, problem 2
// implement zeroBoth function that has 2 call-by-reference parameters (ints)
// set both values to zero

#include <iostream>
using namespace std;

void zeroBoth(int *numA, int *numB){ // refs changes actual argument passed
  *numA = 0;
  *numB = 0;
}

int main(int argc, char ** argv){
  int userNumA;
  int userNumB;
  
  cout << "Enter first num: ";
  cin >> userNumA;
  cout << "Enter second num: ";
  cin >> userNumB;

  zeroBoth(&userNumA, &userNumB); // these two parameters will be changed
  cout << userNumA << " " << userNumB << endl;
  return 0;
}
