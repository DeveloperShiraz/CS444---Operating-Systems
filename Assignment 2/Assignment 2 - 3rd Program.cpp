/*
This program is supposed to ask the user to input number from 1-5 according to the destinations which are:
1. Hawaii, 2. Bahamas, 3. Cancun, 4. Las Vegas, 5. Europe.
Then it's supposed to ask the airline that the user wants to take to fly to their desired destination.
*FYI: The prices are fictional. This program doesn't calculate realtime prices.*
*/

#include <iostream>
using namespace std;
int main() {
  //User Choice Integers:
  int Destination_Choice, Flight_Choice, Passenger_Count;
  //Prices:
  int price[][5] = {
    {100,110,120,130,140},
    {200,210,220,230,240},
    {300,310,320,330,340},
    {400,410,420,430,440},
    {500,510,520,530,540}};
  //round trip cost:
  int round_trip = 2;
  //Destination Selection Display:
  cout << "Enter the numbers from 1-5 to select from the following destination: \n\n1. Hawaii. \n2. Bahamas. \n3. Cancun. \n4. Las Vegas. \n5. Europe. \n\nYour choice from 1-5 is: ";
  cin >> Destination_Choice;

  //Seat Selection Display:
  cout <<"Enter the numbers from 1-5 to select the airline from the following list: \n\n1. US Air. \n2. Delta. \n3. Southwest. \n4. Continental. \n5. American Airline. \n\nYour choice from 1-5 is: ";
  cin >> Flight_Choice;

  //Passenger Count:
  cout << "\nPlease Enter The Number Of Passengers: ";
  cin >> Passenger_Count;

  //Total Expense:
  int total_exp = round_trip * Passenger_Count * price[Destination_Choice-1][Flight_Choice-1];
  cout << "\nThe Total Expense for your round trip with \"" << Passenger_Count << "\"  passengers is $:" << total_exp <<endl;
}
