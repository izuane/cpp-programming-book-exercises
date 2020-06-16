#include <iostream>
using namespace std;

bool accept()
{
    cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'y') return true;
    return false;
}

bool accept2()
{
    cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;

    switch(answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout<<"I'll take that as a no.\n";
            return false;
    }
}

bool accept3()
{
    int tries = 1;
    while(tries < 4) {
        cout << "Do you want to process (y or n)?\n";
        char answer = 0;
        cin >> answer;
        
        switch(answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "Sorry, I don't understand that. Try again.\n";
                ++tries;
        }
    }

    cout << "I'll take that as a no.\n";
    return false;
}

int main()
{
    accept3();
}

