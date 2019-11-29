#include "Player.h"

#include "State.h"
#include "StoppedState.h"

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
    Setstate(new StoppedState(this));
}


Player::~Player()
{
    //dtor
    delete tracksList;
}

std::string Player::nextTrack()
{
    currentTrack++;
    currentTrack %= tracksList->size();
    return ("Playing " + tracksList->at(currentTrack));
}
std::string Player::previousTrack()
{
    currentTrack--;
    currentTrack %= tracksList->size();
    return ("Playing " + tracksList->at(currentTrack));
}
std::string Player::startPlayBack()
{
    return ("Playing " + tracksList->at(currentTrack));
}
std::string Player::Pause()
{
    return "Paused at " + tracksList->at(currentTrack);
}
std::string Player::Stop()
{
    currentTrack = 0;
    return "Stopped";
}
