#include <iostream>
#include <string>
#include <stdlib.h>
#include <dos.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{
    string answerOne;
    string answerTwo;
    string answerThree;
    string answerFour;
    string answerFive;

    int Continue;

    system("PAUSE");
    cout << "It is the year 20XX, and you're aboard an unknown spacecraft. Your scanners cannot pick up any life aboard the ship, you suspect something is wrong." << endl;

    system("PAUSE");
    cout << "You think your scanners are broken and you should probably investigate." << endl;

    system("PAUSE");
    cout << "You get outside of your room and see a window and outside is a planet. You're at the end of the hallway and head down." << endl;
    system("PAUSE");

    cout << "There is an airlock at the end and it opens up. You see a room filled with machinery. This must be the engine room to power the ship. There is no one in sight." << endl;
    cout << "As you look around you see a control board station ahead and a ventilation system above you. Which should you go for?" << endl;

    cout << "Type 'Control' or 'Vent' to decide." << endl;

    cin >> answerOne;

    if(answerOne == "Control"){ //This one has the Level 3 Keycard startout
        cout << "You head up onto the board and see a lot of buttons and levers. Luckily there is a manual laying around and you read it." << endl;
        system("PAUSE");

        cout << "As you are reading a card slips out, it reads:" << endl;
        cout << "LEVEL 3 KEYCARD" << endl;
        system("PAUSE");

        cout << "You notice the control board actually doesn't have any power, but you keep the keycard you found. It should be useful later on." << endl;
        system("PAUSE");

        cout << "Suddenly, the ventilation system turns on. You look on the board and see a light flashing under 'Automated Process' The vent is no longer safe and you head out the exit" << endl;
        system("PAUSE");

        cout << "You now enter what appears to be a lobby. You see a hallway and a counter, where should you go?" << endl;
        cout << "Type 'Hallway' or 'Counter' to decide." << endl;

        cin >> answerTwo;

        if (answerTwo == "Hallway"){
            cout << "You go down the hallway of the lobby and enter some sort of labratory." << endl;
            cout << "You see equippment everywhere, hanging from walls, on shelves, and inside inspection windows." << endl;
            system("PAUSE");
        }
        else if (answerTwo == "Counter"){
            cout << "You jump behind the counter and see a computer. You try to power it on but it requires a password." << endl;
            cout << "You notice the computer is an exanchge and a stock reader for the Intergalactic Stock Exchange. What does that mean?" << endl;
            system("PAUSE");
        }
        else {
        cout << "You didn't type anything! You just stand there until the ship crashes into something and explodes. Try again!" << endl;
        }
    }

    else if (answerOne == "Vent" ){
        cout << "You climb up the machinery and lift yourself up and pull yourself into the vent. It's pretty dark here." << endl;
        system("PAUSE");

        cout << "You continue to head down the vent and see that it begins to go up a bit." << endl;
        cout << "The vent turns directly up now, and you jump to reach. You pull yourself up" << endl;
        system("PAUSE");

        cout << "You keep going down the vent and see a light. Must be an exit." << endl;
        cout << "As you approach you see a room at the exit. You jump down and see a supply room riddled with crates" << endl;
        cout << "You consider your options, should you open a crate, or try and look for a way out?" << endl;
        cout << "Type 'Open' or 'Look' to decide." << endl;

        cin >> answerTwo;

        if(answerTwo == "Open"){
            cout << "You pry open a crate and find a weapon. It appears to be a laser blaster." << endl;
            system("PAUSE");
        }
        else if (answerTwo == "Look"){
            cout << "After closer examination you see there is a pile of crates blocking off an airlock. You push these aside and walk through." << endl;
            system("PAUSE");
        }
        else {
        cout << "You didn't type anything! You just stand there until the ship crashes into something and explodes. Try again!" << endl;
        }

    }

    else {
        cout << "You didn't type anything! You just stand there until the ship crashes into something and explodes. Try again!" << endl;
    }
    return 0;
}
