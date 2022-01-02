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
    const vector<EnumElement> waterBeats{ EARTH, FIRE };
    const vector<EnumElement> waterBeaten{ WATER };
    const Elements* ELEM_WATER = (new Elements(WATER))->initialize(waterBeats, waterBeaten);
    const vector<EnumElement> earthBeats{ FIRE, ICE, STEEL };
    const vector<EnumElement> earthBeaten{ AIR };
    const Elements* ELEM_EARTH = (new Elements(EARTH))->initialize(earthBeats, earthBeaten);
    const vector<EnumElement> airBeats{ ICE };
    const vector<EnumElement> airBeaten{ EARTH, STEEL };
    const Elements* ELEM_AIR = (new Elements(AIR))->initialize(airBeats, airBeaten);
    const vector<EnumElement> fireBeats{ ICE, STEEL };
    const vector<EnumElement> fireBeaten{ WATER, EARTH };
    const Elements* ELEM_FIRE = (new Elements(FIRE))->initialize(fireBeats, fireBeaten);
    const vector<EnumElement> iceBeats{ EARTH };
    const vector<EnumElement> iceBeaten{ WATER, FIRE, ICE };
    const Elements* ELEM_ICE = (new Elements(ICE))->initialize(iceBeats, iceBeaten);
    const vector<EnumElement> steelBeats{ WATER, AIR };
    const vector<EnumElement> steelBeaten{ FIRE, STEEL };
    const Elements* ELEM_STEEL = (new Elements(STEEL))->initialize(steelBeats, steelBeaten);

    

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

