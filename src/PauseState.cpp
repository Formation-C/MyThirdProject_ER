#include "PauseState.h"
#include "StoppedState.h"
#include "PlayingState.h"

void PauseState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayBack() << std::endl;
    delete this;
}

void PauseState::onStop()
{
   player->Setstate(new StoppedState(player));
   std::cout << player->Stop() << std::endl;
   delete this;
}

void PauseState::onPause()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayBack() << std::endl;
    delete this;
}

PauseState::~PauseState()
{
    //dtor
}
