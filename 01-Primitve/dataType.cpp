# include <iostream>
using namespace std;

int main(){
    //// declaring variables of different data types
    int teaLeaves = 50;
    float waterTemperture = 87.89333;
    double pricesOfTea = 199.999;
    char teaGrade = 'A';
    bool isTeaReady = false;

    ///// declaring variables of different data types with different sizes

    unsigned teaLeavesInKg = 100;

    long long teaLeavesInGrams = 100000000000;
    short teaLeavesInMg = 100;

    // printing the value of our variables
    // cout <<  teaLeavesInGrams <<endl;
    // cout <<  teaLeavesInMg <<endl;
     //// type casting
    float  teaPrice = 199.89;
    int roundedTeaPrice = (int) teaPrice; // type casting from float to int

    int teaQuantity = 5;
    double totalPrice = teaQuantity *  teaPrice; // implicit type casting from int to double

    //// printing the value of our variables
    cout <<  teaPrice <<endl;
    cout <<  roundedTeaPrice <<endl;
    cout <<  totalPrice <<endl;



    return 0;
}
    
