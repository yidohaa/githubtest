#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guessedNum;

    while (secretNum != guessedNum){
        cout << "Enter guess number:";
        cin >> guessedNum;
        if(guessedNum >= secretNum){
            cout << "Secret number is greater than your guess number";
        }
        else if(guessedNum <= secretNum){
            cout << "Secret number is less than your guess number";
        }
        

    }

    cout << "You Win!";

    return 0;


}
