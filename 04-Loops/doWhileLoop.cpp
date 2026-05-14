# include <iostream>
# include <string>
using namespace std;
///Challenge 2: Do-While Loop
///Write a program that asks the user if they want to add more sugar to their tea. Keep asking until 
//they respond with"enough." Use a do-while loop for this.


int main(){
    string response;
    do {
        cout << "You add more sugar in you tea (yes/no)" << endl;
        getline(cin,response);
         
    } while (response != "no" && response != "No");

    cout << "Enough Sugar added!" << endl;
    
     
    return 0;
}