# include <iostream>
using namespace std;


///  Challenge 1: While Loop
//Write a program that keeps asking the user to input the number of tea bags they have left. Stop when the number of bags is 0, 
//and print a message that they are out of tea bags.

 
int main(){
    int teabag;
    cout << "Enter Tea Bag You are Store:" << endl;
    cin >> teabag;

    ///whileLoop
    while (teabag >0) {
        cout << "You are " <<teabag <<" Tea Bag are store in shop \n" << endl;
        teabag--;
       
    }
    cout << "Tea Bag is out of stock please come next time" <<endl;
    
 return 0;

}