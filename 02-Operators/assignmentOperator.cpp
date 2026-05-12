# include <iostream>
 using namespace std;
  
 int main(){
 ///Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.
  
int teaBags;
cout << " Enter the Number of tea Bags you Have : ";
cin >> teaBags;

if (teaBags < 20){
    teaBags +=10;
 }
 cout << " Your total tea bags are :  " << teaBags << endl;



    return 0;
 }