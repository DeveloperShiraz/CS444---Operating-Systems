#include <iostream>
using namespace std;

int main() {
  int firstnumber;
  int secondnumber;
  int choice;

  cout << "Please enter the 1st Number: ";
  cin >> firstnumber;
  cout << "Please enter the 2nd Number: ";
  cin >> secondnumber;

  cout << "\nWhat would u like to do with 2 integers?: " << endl;
  cout << "\nEnter 1 To find the sum of 2 Numbers. \nEnter 2 to find the product of 2 Numbers.\nEnter 3 To find the average of 2 Numbers.\nEnter 4 to do all of em. \n\nYour choice is: ";
  cin >> choice;

  int sum = firstnumber + secondnumber;
  int product = firstnumber * secondnumber;
  int average = sum /2;

  if (choice == 1){
    cout << "The sum of 1st and 2nd Number is: " << sum;
  }

  else if (choice == 2){
    cout << "The product of 1st and 2nd Number is: " << product;
  }

  else if (choice == 3){
    cout << "The average of 1st and 2nd Number is: " << average;
  }

  else if ( choice == 4){
    cout << "\nThe sum of 1st and 2nd Number is: " << sum;
    cout << "\nThe product of 1st and 2nd Number is: " << product;
    cout << "\nThe average of 1st and 2nd Number is: " << average;
  }
  else{
    cout << "\nThese are your 2 numbers.\nYou didn't chose the options correctly...";
    cout << "Number 1: " << firstnumber;
    cout << "Number 2: " << secondnumber;
  }
}