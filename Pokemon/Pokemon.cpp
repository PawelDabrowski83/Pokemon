#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string QUIT_GAME = "Q";
    const string MENU_INPUT = "Please enter command or Q for exit.";
    const string GOODBYE = "Thank you for playing.";

    string message = "";
    while (message != QUIT_GAME) {
        cout << MENU_INPUT << endl;
        cin >> message;
    }
    
    cout << GOODBYE << endl;
}

