#pragma once

#include "../core/Screen.h"

class HomeScreen : public Screen {

public:

    void onEnter() override;

    void render(TFT_eSPI& tft) override;
};