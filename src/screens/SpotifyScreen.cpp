#include "SpotifyScreen.h"

void SpotifyScreen::onEnter() {
    Serial.println("[SPOTIFY] Enter");
}

void SpotifyScreen::render(TFT_eSPI& tft) {

    tft.fillScreen(TFT_BLACK);
    tft.fillRoundRect(50, 100, 150, 60, 10, TFT_GREEN);
    tft.setTextColor(TFT_WHITE);

    tft.drawCentreString("SPOTIFY", 160, 120, 4);
}