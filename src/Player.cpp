#include "Player.h"

using namespace std;

Player::Player()
{
    //ctor
    Setplaying(false);
    SetcurrentTrack(0);
    // instancie une list
    tracksList = new std::vector<std::string>();

    for (int ii=0;ii<12;ii++)
    {
        tracksList->push_back("Track " + std::to_string(ii));
    }
}


Player::~Player()
{
    //dtor
    delete tracksList;
}
