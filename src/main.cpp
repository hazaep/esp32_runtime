#include <Arduino.h>
#include <TFT_eSPI.h>

#include "core/runtime/Runtime.h"

#include "screens/SpotifyScreen.h"

TFT_eSPI display;

Runtime runtime(&display);

SpotifyScreen spotifyScreen(
    &runtime
);

void handleToggle(Event event) {

    auto& spotify =
        runtime.stateStore.spotify();

    spotify.playing =
        !spotify.playing;

    runtime
        .screenManager
        .getActiveScreen()
        ->invalidate();

    Serial.printf(
        "Playing: %s\n",
        spotify.playing
            ? "true"
            : "false"
    );
}

void setup() {

    Serial.begin(115200);

    display.init();

    display.setRotation(3);

    uint16_t calData[5] = {
        311,
        3578,
        246,
        3554,
        1
    };

    display.setTouch(
        calData
    );

    runtime.begin();

    runtime.eventBus.on(
        "spotify.toggle",
        handleToggle
    );

    runtime.screenManager
        .setScreen(
            &spotifyScreen
        );
}

void loop() {

    uint16_t x, y;

    if(
        display.getTouch(
            &x,
            &y
        )
    ) {

        if(
            x > 80 &&
            x < 240 &&
            y > 150 &&
            y < 210
        ) {

            runtime.eventBus.emit({
                "spotify.toggle",
                ""
            });

            delay(200);
        }
    }

    runtime.loop();
}