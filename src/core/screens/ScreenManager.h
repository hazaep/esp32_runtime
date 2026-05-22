#pragma once

#include "Screen.h"

class ScreenManager {

private:

    Screen* activeScreen = nullptr;

public:

    void setScreen(Screen* screen);

    void update();

    void render(TFT_eSPI& tft);
};