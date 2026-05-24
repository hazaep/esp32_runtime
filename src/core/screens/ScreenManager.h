#pragma once

#include "Screen.h"

class ScreenManager {

private:

    Screen* activeScreen = nullptr;

public:

    void setScreen(Screen* screen);

    Screen* getActiveScreen();

    void render(TFT_eSPI& display);
};