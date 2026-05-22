#include <Arduino.h>
#include <TFT_eSPI.h>

#include "core/runtime/Runtime.h"

#include "screens/HomeScreen.h"
#include "screens/SpotifyScreen.h"

TFT_eSPI tft = TFT_eSPI();

Runtime runtime(&tft);

HomeScreen homeScreen;
SpotifyScreen spotifyScreen;

unsigned long lastSwitch = 0;

bool spotifyActive = false;

void handleSpotify(Event event) {

    runtime.screenManager.setScreen(&spotifyScreen);
}

void handleHome(Event event) {

    runtime.screenManager.setScreen(&homeScreen);
}

void setup() {

    Serial.begin(115200);

    tft.init();

    tft.setRotation(3);

    runtime.begin();

    runtime.eventBus.on(
        "screen.spotify",
        handleSpotify
    );

    runtime.eventBus.on(
        "screen.home",
        handleHome
    );

    runtime.screenManager.setScreen(&homeScreen);
}

void loop() {

    runtime.loop();

    if (millis() - lastSwitch > 3000) {

        lastSwitch = millis();

        spotifyActive = !spotifyActive;

        if (spotifyActive) {

            runtime.eventBus.emit({
                "screen.spotify",
                ""
            });

        } else {

            runtime.eventBus.emit({
                "screen.home",
                ""
            });
        }
    }

    delay(16);
}