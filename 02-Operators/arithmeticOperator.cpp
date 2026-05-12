# include <iostream>
using namespace std;

int main (){

// Assignment1: Arithmetic Operators
// Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.


    int teaCups;
    double teaPrice , totalPrice , discountPrice;

    cout << "Enter the number of cups to order: ";

    cin >> teaCups;

    cout << " Enter the Price of per cups:  ";
    cin >> teaPrice;

    totalPrice  = teaCups * teaPrice;

    //////////// Apply 10%  discount if total prices above 120

    if (totalPrice > 120){
        
        discountPrice = totalPrice - (totalPrice * 0.1);
        cout << " Discount Prices is : " << discountPrice << endl;
    }else{
        cout << " Total Price is " << totalPrice << endl;
    }
    
    




    return 0;
}