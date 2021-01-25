/*
This program is supposed to read the integer from the input and just display it.
*/


#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Please Press Y to run the program: ";
  char run_program = 'Y';
  cin >> run_program;
  if (run_program == 'Y' || run_program == 'y'){
    cout << "Please enter the integers to display: ";
    cin >> number;
    cout << "These are the integers the user requested to display: " << number;
  }
  else {
    cout << "You have decided not to run the program.";
  }
}
