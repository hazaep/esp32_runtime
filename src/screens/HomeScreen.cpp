#include "HomeScreen.h"

void HomeScreen::onEnter() {

    Serial.println("[HOME] Enter");
}

void HomeScreen::render(TFT_eSPI& tft) {

    tft.fillScreen(TFT_WHITE);

    tft.setTextColor(TFT_BLACK);

    tft.drawCentreString("HOME", 160, 120, 2);

}