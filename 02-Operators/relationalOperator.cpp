#include <iostream>

using namespace std;

int main()
{
  //    Challenge 3: Relational and Logical Operators
  // A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

  int cupsBuy;
  int membershipYears;

  cout << " Enter Number of Cups do You Have :  ";
  cin >> cupsBuy;

  cout << " Enter Your Membership Of Year : ";
  cin >> membershipYears;

  if (cupsBuy >= 12 || membershipYears > 1)
  {

    cout << "Congratulations! You qualify for a discount." << endl;
  }
  else
  {
    cout << "Sorry! you do not qualify for a discount. " << endl;
  }

  return 0;
}