# include <iostream>
using namespace std;

int main()
{
// data for calculator
    char op;
    float num1, num2;
    
// inputting and outputting data/ operators
    cout << "Enter one operator(+ , - , *, /) : ";
    cin >> op;
    
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
            return 0;
}