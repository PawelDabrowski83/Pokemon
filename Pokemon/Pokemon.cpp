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
    const Elements* ELEM_WATER  = new Elements("WATER");
    const Elements* ELEM_FIRE   = new Elements("FIRE");
    const Elements* ELEM_EARTH  = new Elements("EARTH");
    const Elements* ELEM_AIR    = new Elements("AIR");
    const Elements* ELEM_ICE    = new Elements("ICE");
    const Elements* ELEM_STEEL  = new Elements("STEEL");
    
    const vector<Elements> universe { 
        *new Elements("WATER"),      *new Elements("FIRE"),       *new Elements("EARTH"),
        *new Elements("AIR"),        *new Elements("ICE"),        *new Elements("STEEL")
    };
    // beats for WATER
    vector<Elements> beats{

    }




    /*
        GAMELOOP
    */

    string message = "";
    while (message != QUIT_GAME) {
        cout << MENU_INPUT << endl;
        cout << universe[2].getName() << endl;
        cin >> message;
    }
    
    cout << GOODBYE << endl;
}

