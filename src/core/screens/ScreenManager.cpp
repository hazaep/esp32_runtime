#include "ScreenManager.h"

void ScreenManager::setScreen(Screen* screen) {

    if (activeScreen != nullptr) {
        activeScreen->onExit();
    }

    activeScreen = screen;

    if (activeScreen != nullptr) {
        activeScreen->onEnter();
    }
}

void ScreenManager::update() {

    if (activeScreen != nullptr) {
        activeScreen->update();
    }
}

void ScreenManager::render(TFT_eSPI& tft) {

    if (activeScreen != nullptr) {
        activeScreen->render(tft);
    }
}