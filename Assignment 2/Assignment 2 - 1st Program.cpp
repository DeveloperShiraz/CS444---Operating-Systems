#include <iostream>
using namespace std;

int main(){
  int n1, n2, n3, n4, n5, n6, n7, n8;
  cout << "Enter 8 Numbers one-by-one: ";
  cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
  int sum = n1+ n2 + n3 + n4 + n5 + n6 + n7 + n8;
  int product = n1 * n2 * n3 * n4 * n5 * n6 * n7 * n8;
  int average = (n1+ n2 + n3 + n4 + n5 + n6 + n7 + n8) /8;
  cout << "The Sum of the 8 Numbers is: " << sum << endl;
  cout << "The Product of the 8 Numbers is: " << product << endl;
  cout << "The Average of the 8 Numbers is: " << average << endl;
}