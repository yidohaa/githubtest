#include <iostream>
using namespace std;

struct player
{
    char name[50];
    int roll;
    char position;
} s[10];

int main()
{
    cout << "Enter information of players: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "For Player " << s[i].roll << ",  Enter Info." << endl;

        cout << "Enter name: " << endl;
        cin >> s[i].name;

        cout << "Enter Position: ";
        cin >> s[i].position;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\n Player " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Position: " << s[i].position << endl;
    }

    return 0;
}