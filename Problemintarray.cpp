// assignment 2, problem 1
// read 10 nonnegative ints into an array, numberArray
// print back to user
// don't use functions

#include <iostream>
using namespace std;

int main(int argc, char ** argv){
  int userNum;
  int numberArray[10]; // declare array with a size of 10
  int i = 0;

  //User Input Nums
  while(i < 10){ // filling the Array with user inputed nums
    cout << "Enter non-negative number: ";
    cin >> userNum;
    if (userNum < 0){ // accounting for user-error if user inputs negative num
      while (userNum < 0) { // loops until non-neg number is entered
        cout << "Invalid. Please enter non-negative number: ";
        cin >> userNum;
      }
    }
    numberArray[i] = userNum;
    i = i + 1;
  }

  // Output
  cout << "Numbers entered: ";
  int j;
  for (j = 0; j < 10; ++j){
    if (j != 9){
      cout << numberArray[j] << ", ";
    }
    else{ // last num doesn't have a comma after it
      cout << numberArray[j] << endl;
    }
  }

  return 0;
}
