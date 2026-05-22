#pragma once

#include <TFT_eSPI.h>

class Screen {

public:

    virtual void onEnter() {}

    virtual void onExit() {}

    virtual void update() {}

    virtual void render(TFT_eSPI& tft) {}
};