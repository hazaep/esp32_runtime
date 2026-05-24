#pragma once

#include "../core/screens/Screen.h"
#include "../core/runtime/Runtime.h"

class SpotifyScreen : public Screen {

private:

    Runtime* runtime;

public:

    SpotifyScreen(
        Runtime* runtime
    );

    void render(
        TFT_eSPI& display
    ) override;
};