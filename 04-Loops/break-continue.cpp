# include <iostream>
# include <string>
using namespace std;

///Challenge 4: Break and Continue
//Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." 
//If "Herbal Tea" is encountered, skip it using continue. If "No Tea" is encountered, stop the loop using break.



int main(){
  string teaType[6] = {"White Tea","Black Tea" ,"Herbal Tea" , "Leom Tea" ,"No Tea" ,"Pau Cha"};

  for (int i = 0; i < 6; i++){
    if (teaType[i]== "Herbal Tea") {
        cout << "Skipping the " << teaType[i] << "." << "It is bad tea \n";
        continue;  
    }
    if (teaType[i]== "No Tea") {
         cout << "There are " << teaType[i] << "." << "avilable next time!!";
        break;
    }
    
    cout << "Serving: " << teaType[i] << endl;
   
  }
  


}