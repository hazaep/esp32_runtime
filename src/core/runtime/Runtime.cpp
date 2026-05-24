#include "Runtime.h"

Runtime::Runtime(
    TFT_eSPI* display
) {
    this->display = display;
}

void Runtime::begin() {

    Serial.println(
        "[RUNTIME] START"
    );
}

void Runtime::loop() {

    screenManager.render(
        *display
    );
}