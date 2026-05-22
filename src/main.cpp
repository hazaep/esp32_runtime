#include <Arduino.h>
#include <TFT_eSPI.h>

#include "core/ScreenManager.h"

#include "screens/HomeScreen.h"
#include "screens/SpotifyScreen.h"

TFT_eSPI tft = TFT_eSPI();

ScreenManager screenManager;

HomeScreen homeScreen;
SpotifyScreen spotifyScreen;

unsigned long lastSwitch = 0;
bool spotifyActive = false;

void setup() {

    Serial.begin(115200);

    tft.init();

    tft.setRotation(3);

    screenManager.setScreen(&homeScreen);
}

void loop() {

    screenManager.update();

    screenManager.render(tft);

    if (millis() - lastSwitch > 30000) {

        lastSwitch = millis();

        spotifyActive = !spotifyActive;

        if (spotifyActive) {
            screenManager.setScreen(&spotifyScreen);
        } else {
            screenManager.setScreen(&homeScreen);
        }
    }

    delay(360);
}