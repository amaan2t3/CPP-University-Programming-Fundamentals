#include <iostream>
using namespace std;

int main()
{
    /// Challenge 4: Switch Case
    // Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.

    int choice;
    double price;

    cout << "Select Your Tea \n";
    cout << "1: Green Tea \n";

    cout << "2: lemon Tea \n";

    cout << "4: Oolong Tea \n";
    cout << "Enter Your choice in number:  \n";

    cin >> choice;
    switch (choice)
    {
    case 1:
         price = 1.5;
        cout << "You order Green Tea Price: "<< price << endl;
        break;
    case 2:
        price = 2.0;
        cout << "You order lemon Tea Price: "<< price << endl;
        break;
    case 3:
        price = 2.5;
        cout << "You order Oolong Tea Price: "<< price << endl ;
        break;
    default:
        price = 0.0;
        cout << "Invalid choice. Please select a valid tea option." << price << endl;
        break;
    }
}