# include <iostream>
using namespace std;

/// Challenge 3: For Loop
//Create a program that prints the first 10 multiples of 2, representing the total tea bags 
//required for making batches of tea.
int main(){
     
    for (int i = 0; i <=10; i++) {
         cout << "2 * " << i << " = " <<  i * 2  <<endl;
             cout << "total tea bag is " << i *2 << endl;

    };
    cout << " Outside of Loop!!" << endl;
    


    return 0;
}