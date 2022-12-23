#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;


    cout << "Enter first number: \n";
    cin >> num1;

    cout << "Enter a Operator: \n";
    cin >> op;

    cout << "Enter another number: \n";
    cin >> num2;

    int result;
    if(op == '+'){
        result = num1 + num2;


    }   else if(op == '-'){
        result = num1 - num2;

    }   else if(op == '*'){
        result = num1 * num2;

    }   else if(op == '/'){
        result = num1 / num2;

    }   else {
        cout << "Invalid Operator";

    }
    cout << "The result is: " << result;

    return 0;
}

