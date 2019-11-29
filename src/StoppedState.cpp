#include "StoppedState.h"
#include "PlayingState.h"

void StoppedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayBack() << std::endl;
       delete this;
}

void StoppedState::onStop()
{
    throw " player already stopped";
    delete this;
}

void StoppedState::onPause()
{
    throw " player already stopped";
    delete this;
}
StoppedState::~StoppedState()
{
    //dtor
}
