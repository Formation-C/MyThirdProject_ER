#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>

class State;
#include "State.h"

class Player
{
    public:
        /** Default constructor */
        Player();
        /** Default destructor */
        virtual ~Player();

        /** Access playing
         * \return The current value of playing
         */
        bool Getplaying() { return playing; }
        /** Set playing
         * \param val New value to set
         */
        void Setplaying(bool val) { playing = val; }
        /** Access tracksList
         * \return The current value of tracksList
         */
        std::vector <std::string> * GettracksList() { return tracksList; }
        /** Set tracksList
         * \param val New value to set
         */
        void SettracksList(std::vector <std::string> *val) { tracksList = val; }
        /** Access currentTrack
         * \return The current value of currentTrack
         */
        int GetcurrentTrack() { return currentTrack; }
        /** Set currentTrack
         * \param val New value to set
         */
        void SetcurrentTrack(int val) { currentTrack = val; }
        /** Access state
         * \return The current value of state
         */
        State *Getstate() { return state; }
        /** Set state
         * \param val New value to set
         */
        void Setstate(State *val) { state = val; }

    protected:

    private:
        bool playing; //!< Member variable "playing"
        std::vector <std::string> *tracksList; //!< Member variable "tracksList"
        int currentTrack; //!< Member variable "currentTrack"
        State* state; //!< Member variable "state"
};

#endif // PLAYER_H
