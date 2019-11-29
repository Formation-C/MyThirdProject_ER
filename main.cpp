#include <iostream>
#include "Player.h"
#include"algorithm"
#include "memory"

using namespace std;



// State Design pattern => faire une machine à état avec des objets
// on aura une classe pour chaque etat
int main()
{
    //Player* player =new Player();
    //utilisation de unique_ptr pour ne pas faire le delete de player à la fin
    // voir aussi shared_ptr and weak_ptr
    std::unique_ptr<Player> player(new Player);
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
        try
        {
            if (input=="play")
            player->Getstate()->onPlay();
            else if (input=="stop")
                player->Getstate()->onStop();
            else if (input=="pause")
                player->Getstate()->onPause();
            else if (input=="exit")
                break;
            else
                throw "unknown command";
        }
        catch(char const* errorMessage)
        {
            cout << "error " << errorMessage << endl;
        }
    }
    //delete player;

    return 0;
}
