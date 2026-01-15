# include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
// data for calculator
    char op;
    double num1, num2;
    
// inputting and outputting data/ operators
    cout << "Enter one operator(+ , - , *, /, s for square root) : ";
    cin >> op;
    
// For separate handling of the square root operation, since it only requires one number
    if (op == 's') {
        cout << "Enter a non-negative number to find its square root: ";
        cin >> num1;
        
// Square root is calculated based on the number entered and the amount of numbers following the decimal point is set
        if (num1 >= 0) {
            cout << fixed << setprecision(4) << "the square root of " << num1 << " = " << sqrt(num1); 
        } else {
            cout << "Error! The square root of a negative number can not be calculated.";
        }
        } else {
// For standard operations that require two numbers   
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    
// Switch case
    switch(op) {
        
        case '+' :
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        
        case '-' :
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        
        case '*' :
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        
        case '/' :
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    
        default:
        // error message if operator entered is none of the options given
        cout << "Error!!! The operator entered is incorrect.Try again!";
        break;
        }
    }
            return 0;
}