#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guessedNum;
    char yesorno;


    cout << "Do you want to play Guesswhat game?" << endl << "y/n";
    cin >> yesorno;
    if (yesorno == 'y'){
        while (secretNum != guessedNum){
        cout << "Enter guess number:";
        cin >> guessedNum;
        if(guessedNum > secretNum){
            cout << "Secret number is greater than your guess number" << endl;
        }
        else if(guessedNum < secretNum){
            cout << "Secret number is less than your guess number" <<endl;
        }
        else if(guessedNum == secretNum){
            cout << "Secret number is equal to your guess number " << endl;
            cout << "Congratulation, You Win.";
        }
        

    }


    }
    else if(yesorno == 'n'){
        cout << "Ok, Maybe next time" << endl;

    }






    return 0;


}
