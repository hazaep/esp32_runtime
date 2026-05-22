#include "Runtime.h"

Runtime::Runtime(TFT_eSPI* display) {

    tft = display;
}

void Runtime::begin() {

    Serial.println("[RUNTIME] Begin");
}

void Runtime::loop() {

    screenManager.update();

    screenManager.render(*tft);
}