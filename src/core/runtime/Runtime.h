#pragma once

#include <TFT_eSPI.h>

#include "../events/EventBus.h"
#include "../screens/ScreenManager.h"

class Runtime {

private:

    TFT_eSPI* tft;

public:

    EventBus eventBus;

    ScreenManager screenManager;

    Runtime(TFT_eSPI* display);

    void begin();

    void loop();
};