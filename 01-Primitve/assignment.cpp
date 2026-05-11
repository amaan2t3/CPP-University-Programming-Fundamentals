# include <iostream>
# include <string>
using namespace std;


int main(){
      //// Assignment 1: Primitive Data Types and User Input
    //Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.
    string teaName = "Piyou Cha";
    float teaPriceKg = 199.89;
    char teaGrade = 'A';
    bool isTeaAvailable = true;
    cout << "Tea Name: " << teaName << endl;
    cout << "Tea Price per Kg: " << teaPriceKg << endl;
    cout << "Tea Grade: " << teaGrade << endl;
    cout << "Is the tea available? " << (isTeaAvailable ? "Yes"   : "No") << endl;


    
     /// Assignment 2: Type Casting and User Input
    /// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
    float basePrice;
    cout << "Enter the base price of tea: ";
    cin >> basePrice;
    float increasedPrice = basePrice * 1.10; // Increase price by 10%
    int roundedPrice = (int) increasedPrice; // Round the price using explicit casting
    cout << "The new price of tea after a 10% increase is: " << roundedPrice << endl;


    /// Assignment 3: User Input and Output Formatting
    ///Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.
    string userTea;
    int teaQuantity;
    cout << "What is your favorite tea? ";
    getline(cin, userTea); // To consume the newline character left by previous cin
    cout << "How many cups of " << userTea << " would you like to have? ";  
    cin >> teaQuantity;
    cout << teaQuantity << " cups of " << userTea << " coming right up!" << endl;
    return 0;

}