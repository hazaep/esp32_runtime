#pragma once

#include <TFT_eSPI.h>

#include "../events/EventBus.h"
#include "../state/StateStore.h"
#include "../screens/ScreenManager.h"

class Runtime {

private:

    TFT_eSPI* display;

public:

    EventBus eventBus;

    StateStore stateStore;

    ScreenManager screenManager;

    Runtime(
        TFT_eSPI* display
    );

    void begin();

    void loop();
};