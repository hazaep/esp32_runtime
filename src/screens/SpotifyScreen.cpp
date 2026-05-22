#include "SpotifyScreen.h"

void SpotifyScreen::onEnter() {

    Serial.println("[SPOTIFY] Enter");
}

void SpotifyScreen::render(TFT_eSPI& tft) {

    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_CYAN);

    tft.drawCentreString("SPOTIFY", 160, 120, 4);
}