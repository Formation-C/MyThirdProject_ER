#include <iostream>
#include "Player.h"
#include"algorithm"

using namespace std;



// State Design pattern => faire une machine à état avec des objets
// on aura une classe pour chaque etat
int main()
{
    Player* player =new Player();
    for_each(
         player->GettracksList()->begin(),
         player->GettracksList()->end(),
         [](string trackName) {
            cout << trackName << endl;}
    );
    string input;
    while (input != "exit")
    {
        cin >> input;
        cout  << input << endl;
    }
    return 0;

    delete player;

}
