# include <iostream>
# include <string>
using namespace std;

//Challenge 5: Nested Loops
//Write a program that displays a tea brewing schedule. For each day of the week (outer loop),
 //brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).
 int main(){
    string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string meals[3] = {"Breakfast", "Lunch", "Dinner"};

    /// outer Loop
    for (int i = 0; i < 7; i++) {
     cout << "\nTea Schedule for " << daysOfWeek[i] << ":\n";

     
     /// Inner Loop
     for (int j = 0; j < 3; j++) {
        cout << meals[j] << " : Brew two cup of tea" << endl;
     }
     
    }
       return 0;
 }