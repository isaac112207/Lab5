#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

struct BusinessCard {
  string companyName;
  string address;
  string phoneNumber;
  string workingHours;
  string poc;  
  string priceQuoted;
};

int main() {
  srand(time(0)); // Seed the random number generator

  // Potential names
  string companyNames[] = {"Link Co", "Precise Inc", "MSN Inc", "Opp Co", "DEF Enterprise"};
  string pocPool[] = {"James", "Charles", "Bobby", "Daryl", "Jebadiah"};
  string addressPool[] = {"123 Perris Ave", "426 Rocky Ave", "619 Pinelake Rd", "903 Maplewood Blvd", "202 Ceaser Ln"};
  string phoneNumberPool[] = {"236-456, 567-1122, 982-1245, 123-4567, 987-6543"};

  // Generate 5 business cards
  BusinessCard companies[5];
  cout << left << setw (20) << "Company" << setw (15) << "POC" << "Price Quoted" << endl;
  cout << "------------------------------------------------------------" << endl;
  for (int i = 0; i < 5; i++)
    int randomName = rand() % 5;
   int randomPoc = rand() % 5;

  // Assign values to struct
  companies[i].companyName = companyNames[randomName];
  companies[i].poc = pocPool[randomPoc];
  companies[i].adress = addressPool[randomName];
  companies[i].phoneNumber = phoneNumberPool[randomName];

  // Generate random price quote
  companies[i].priceQuoted = (rand() % 800) + 200;

  // Print the business card information
  cout << left << setw(20) << companies[i].companyName << setw(15) << companies[i].poc << "$" << fixed << setprecision(2) << companies[i].priceQuoted << endl;
}

  // Find the best price quoted 
  int winningIndex = 0;
  for (int i = 1; i < 5; i++) {
     if (companies[i].priceQuoted < companies[winningIndex].priceQuoted) {
       winningIndex = i;
     }
  }
  cout << "\nThe best price quoted is $" << companies[winningIndex].priceQuoted << " from " << companies[winningIndex].companyName << endl;

  return 0;
}