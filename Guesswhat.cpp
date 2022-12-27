#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guessedNum;
    char yesorno;
    int attemptcount;

    


    cout << "Do you want to play Guesswhat game?" << endl << "Please Answer by y/n: ";
    cin >> yesorno;
    if (yesorno == 'y'){
        while (secretNum != guessedNum){
        cout << "Enter guess number:";
        cin >> guessedNum;
        if(attemptcount == 2){
            cout << "You have 2 more chance." << endl;
        }
        else if(attemptcount == 4){
            cout << "Game Over." << endl;
            break;
        }

        if(guessedNum > secretNum){
            cout << "Secret number is greater than your guess number" << endl;
            attemptcount++;
        }
        else if(guessedNum < secretNum){
            cout << "Secret number is less than your guess number" << endl;
            attemptcount++;


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
