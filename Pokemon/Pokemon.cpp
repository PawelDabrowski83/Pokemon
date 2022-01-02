#include <iostream>
#include <string>
#include <vector>
#include "Elements.h"

using namespace std;

int main()
{
    /*
        MESSAGES
    */
    const string QUIT_GAME = "Q";
    const string MENU_INPUT = ">> Please enter command or Q for exit.";
    const string GOODBYE = "Thank you for playing.";

    /*
        INIT
    */
    

    /*
        GAMELOOP
    */

    string message = "";
    while (message != QUIT_GAME) {
        cout << MENU_INPUT << endl;
        cin >> message;

    }
    
    cout << GOODBYE << endl;
}

