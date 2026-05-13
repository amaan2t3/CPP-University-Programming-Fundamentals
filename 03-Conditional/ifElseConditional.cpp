# include <iostream>
using namespace std;

int main (){
   // Challenge 2: If-Else Statement
//Create a program that asks the user for their age. If the user is older than 18, allow them to proceed with purchasing 
//tea; otherwise, print a message saying they are too young to purchase.
          int userAge;
          cout << "Enter Your Age For  Purchasing A tea";
          cin >> userAge;

          if (userAge >= 18) {
            cout << "You allow to Purchasing A Tea";
            
          }else{
            cout << "You Not allow to Purchasing A Tea";
          }
          
}