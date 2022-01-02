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

    const Elements* ELEM_WATER = new Elements("WATER");
    const Elements* ELEM_FIRE = new Elements("FIRE");
    const Elements* ELEM_EARTH = new Elements("EARTH");
    const Elements* ELEM_AIR = new Elements("AIR");
    const Elements* ELEM_ICE = new Elements("ICE");
    const Elements* ELEM_STEEL = new Elements("STEEL");

    
    const vector<Elements> waterBeats { *ELEM_FIRE, *ELEM_EARTH };
    const vector<Elements> waterBeaten{ *ELEM_WATER };

    ELEM_WATER  = (new Elements("WATER"))->initialize(waterBeats, waterBeaten);

    
/*
    ELEM_FIRE   = (new Elements("FIRE"))->initialize(const vector<Elements> {*ELEM_ICE, * ELEM_STEEL}, const vector<Elements> {*ELEM_EARTH, * ELEM_WATER});
    ELEM_EARTH  = (new Elements("EARTH"))->initialize(const vector<Elements> {*ELEM_FIRE, * ELEM_ICE, * ELEM_STEEL}, const vector<Elements> {*ELEM_AIR});
    ELEM_AIR    = (new Elements("AIR"))->initialize(const vector<Elements> {*ELEM_ICE}, const vector<Elements> {*ELEM_EARTH, * ELEM_STEEL});
    ELEM_ICE = (new Elements("ICE"))->initialize(const vector<Elements> {*ELEM_EARTH}, const vector<Elements> {*ELEM_WATER, * ELEM_FIRE, * ELEM_ICE});
    ELEM_STEEL = (new Elements("STEEL"))->initialize(const vector<Elements> {*ELEM_WATER, * ELEM_AIR}, const vector<Elements> {*ELEM_FIRE, * ELEM_STEEL});
  */  
    const vector<Elements> universe { 
        *ELEM_WATER, *ELEM_FIRE, *ELEM_EARTH, *ELEM_AIR, *ELEM_ICE, *ELEM_STEEL
    };


    /*
        GAMELOOP
    */

    string message = "";
    while (message != QUIT_GAME) {
        cout << MENU_INPUT << endl;
        cout << universe[2].getName() << endl;
        cin >> message;

        cout << universe[2].attackOn(*ELEM_WATER) << endl;
    }
    
    cout << GOODBYE << endl;
}

