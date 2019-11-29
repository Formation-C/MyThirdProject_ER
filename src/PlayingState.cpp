#include "PlayingState.h"
#include "StoppedState.h"
#include "PauseState.h"

void PlayingState::onPlay()
{
   player->Setstate(new PauseState(player));
   std::cout << player->Pause() << std::endl;
   delete this;
}

void PlayingState::onStop()
{
   player->Setstate(new StoppedState(player));
   std::cout << player->Stop() << std::endl;
   delete this;
}

void PlayingState::onPause()
{
   player->Setstate(new PauseState(player));
   std::cout << player->Pause() << std::endl;
   delete this;
}

PlayingState::~PlayingState()
{
    //dtor
}
