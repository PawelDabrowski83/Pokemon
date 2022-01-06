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
    int gameRound = 1;
    bool creaturesSelected = false;
    cout << WELCOME << endl;
    cout << WELCOME2 << endl;
    cout << WELCOME3 << endl;
    cout << GENERATING_CREATURES << endl;
    cout << HR << endl;
    

    string message = "";
    while (message != QUIT_GAME) {
        if (!creaturesSelected) {
            cout << LIST_CREATURES << endl;
        }
        else {
            cout << HR << endl;
            cout << BEGIN_ROUND_NO << gameRound++ << endl;
            cout << MENU_INPUT << endl;

        }
        
        cin >> message;


    }
    
    cout << GOODBYE << endl;

}

