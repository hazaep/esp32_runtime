#include "SpotifyScreen.h"

SpotifyScreen::SpotifyScreen(
    Runtime* runtime
) {
    this->runtime = runtime;
}

void SpotifyScreen::render(
    TFT_eSPI& display
) {

    auto& spotify =
        runtime->stateStore.spotify();

    display.fillScreen(
        TFT_BLACK
    );

    display.setTextColor(
        TFT_WHITE
    );

    display.drawCentreString(
        "SONG A",
        160,
        60,
        4
    );

    if(spotify.playing) {

        display.fillRoundRect(
            80,
            150,
            160,
            60,
            10,
            TFT_RED
        );

        display.drawCentreString(
            "PAUSE",
            160,
            170,
            2
        );

    } else {

        display.fillRoundRect(
            80,
            150,
            160,
            60,
            10,
            TFT_DARKGREEN
        );

        display.drawCentreString(
            "PLAY",
            160,
            170,
            2
        );
    }
}