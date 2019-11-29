#ifndef PAUSESTATE_H
#define PAUSESTATE_H

#include <State.h>


class PauseState : public State
{
    public:
       using State::State;

        virtual ~PauseState();

        void onPlay();
        void onStop();
        void onPause();

    protected:

    private:
};

#endif // PAUSESTATE_H
