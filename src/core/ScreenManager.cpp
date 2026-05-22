#include "ScreenManager.h"

void ScreenManager::setScreen(Screen* screen) {

    if (currentScreen != nullptr) {
        currentScreen->onExit();
    }

    currentScreen = screen;

    if (currentScreen != nullptr) {
        currentScreen->onEnter();
    }
}

void ScreenManager::update() {

    if (currentScreen != nullptr) {
        currentScreen->update();
    }
}

void ScreenManager::render(TFT_eSPI& tft) {

    if (currentScreen != nullptr) {
        currentScreen->render(tft);
    }
}