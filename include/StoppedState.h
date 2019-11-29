#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include <State.h>

class StoppedState : public State
{
    public:
        using State::State;

        /** Default constructor */
        StoppedState();
        /** Default destructor */
        virtual ~StoppedState();

        void onPlay();
        void onStop();

    protected:

    private:
};


#endif // STOPPEDSTATE_H
