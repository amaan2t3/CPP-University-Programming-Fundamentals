# include <iostream>
using namespace std;

int main(){
    ///Challenge 3: Nested If-Else
// Write a program that checks the temperature of tea water input by the user:
// If the temperature is above 100°C, print "Too hot!"
// If the temperature is between 80°C and 100°C, print "Perfect temperature."
// If the temperature is below 80°C, print "Too cold!"


    int teaWaterTemperature;
     cout << "Enter Tea Water Temperature (0°C to 100°C) :";
     cin >> teaWaterTemperature;

     if (teaWaterTemperature == 100) {
        cout << "Too Hot"<< endl;

     }else if (teaWaterTemperature >=80 && teaWaterTemperature <=100){
        cout << "Perfect Temperature! "<< endl;

     }else if (teaWaterTemperature < 80) {
        cout << "Too Cold!" << endl;
     }
     
     

     


}