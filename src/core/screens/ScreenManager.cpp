#include "ScreenManager.h"

void ScreenManager::setScreen(
    Screen* screen
) {

    if(activeScreen) {

        activeScreen->onExit();
    }

    activeScreen = screen;

    if(activeScreen) {

        activeScreen->invalidate();
        activeScreen->onEnter();
    }
}

Screen* ScreenManager::getActiveScreen() {

    return activeScreen;
}

void ScreenManager::render(
    TFT_eSPI& display
) {

    if(!activeScreen)
        return;

    if(!activeScreen->isDirty())
        return;

    activeScreen->render(display);

    activeScreen->validate();
}