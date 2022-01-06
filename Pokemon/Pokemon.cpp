#include <iostream>
#include <string>
#include <vector>
#include "Elements.h"
#include "Messages.h"
#include "Init.h"


using namespace std;

int main()
{
    /*
        GAMELOOP
    */

    string message = "";
    while (message != QUIT_GAME) {
        cout << MENU_INPUT << endl;
        cout << ELEM_STEEL->attackOn(WATER) << endl;
        
        cin >> message;


    }
    
    cout << GOODBYE << endl;

}

