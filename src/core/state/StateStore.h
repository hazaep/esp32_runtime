#pragma once

#include "AppState.h"

class StateStore {

private:

    SpotifyState spotifyState;

public:

    SpotifyState& spotify() {

        return spotifyState;
    }
};