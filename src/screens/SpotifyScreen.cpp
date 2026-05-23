#include "SpotifyScreen.h"

void SpotifyScreen::onEnter() {

    Serial.println("[SPOTIFY] Enter");
}

void SpotifyScreen::render(TFT_eSPI& tft) {

    tft.fillScreen(TFT_PINK);

    tft.setTextColor(TFT_BLACK);

    tft.drawCentreString("SPOTIFY", 160, 120, 2);

}