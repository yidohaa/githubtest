#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    string opt;
    int sum;

    cout << "Enter first number: \n";
    cin >> a;

    cout << "Enter a Operator: \n";
    cin >> opt;


    cout << "Enter another number: \n";
    cin >> b;

    sum = a + b;
    cout << "the sum of those numbers is " << sum << endl;



    return 0;
}

