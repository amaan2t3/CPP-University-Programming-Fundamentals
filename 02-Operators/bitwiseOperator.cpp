# include  <iostream>

using namespace std;

int main(){
// Challenge 4: Bitwise Operators
// Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.

int stock;
int teaType;
cout << "Enter the stock (1 for Green, 2 for Black, 4 for Oolong): ";
cin >> stock;
cout << "Enter the tea type to check (1 for Green, 2 for Black, 4 for Oolong): ";
cin >> teaType;
if (stock && teaType) {
    cout << "The tea type is in stock." << endl;
} else {
    cout << "The tea type is not in stock." << endl;
}

return 0;
}