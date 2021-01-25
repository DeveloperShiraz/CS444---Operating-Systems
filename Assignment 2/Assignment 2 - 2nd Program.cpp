/*
This program is supposed to read the collective of integer numbers. If the 15>Number>0. Then the program is supposed to terminate the loop and find the factorial of the number.
*/

#include <iostream>
using namespace std;

int main() {
  int limit = 15;
  int user_input, i;
  long factorial = 1;
  do {
    cout << " Enter a number: ";
    cin>> user_input;
  }while (user_input<=0 ||user_input>= limit);
  for(int i = 1; i <=user_input; i++){
    factorial = factorial * i;
  }
  cout<<"The Factorial of \"" << user_input << "\" is = " << factorial << endl;
}
