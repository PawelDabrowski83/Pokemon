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
    cout << WELCOME << endl;

    string message = "";
    while (message != QUIT_GAME) {
        cout << HR << endl;
        cout << BEGIN_ROUND_NO << gameRound++ << endl;
        cout << MENU_INPUT << endl;
        
        cin >> message;


    }
    
    cout << GOODBYE << endl;

}

