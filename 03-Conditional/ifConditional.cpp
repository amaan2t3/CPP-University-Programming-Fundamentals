#include <iostream>
#include <string>
using namespace std;

int main()
{
    /// Challenge 1: If Statement
    /// Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying,
    ///  "You have excellent taste!"

    string userFavoriteTea;

    cout << "Enter Your Favorite Tea";

    getline(cin, userFavoriteTea);

    if (userFavoriteTea == "Oolong")
    {
        cout << "You Order Your Favorite Tea Oolong";
    }

    return 0;
}