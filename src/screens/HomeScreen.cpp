#include "HomeScreen.h"

void HomeScreen::onEnter() {

    Serial.println("[HOME] Enter");
}

void HomeScreen::render(TFT_eSPI& tft) {

    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_GREEN);

    tft.drawCentreString("HOME", 160, 120, 4);
}