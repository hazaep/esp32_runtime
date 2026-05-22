#include "HomeScreen.h"

void HomeScreen::onEnter() {
    Serial.println("[HOME] Enter");
}

void HomeScreen::render(TFT_eSPI& tft) {

    tft.fillScreen(TFT_BLACK);
    tft.fillRoundRect(50, 100, 150, 60, 10, TFT_BLUE);
    tft.setTextColor(TFT_WHITE);
    tft.drawCentreString("HOME SCREEN", 160, 120, 4);
}