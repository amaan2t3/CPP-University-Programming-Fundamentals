# include <iostream>
using namespace std;

//  function declaration


// function definition
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // function call
    int result = add(num1, num2);
    cout << "The sum is: " << result << endl;

    return 0;
}
