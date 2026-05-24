#pragma once

#include <TFT_eSPI.h>

class Screen {

protected:

    bool dirty = true;

public:

    virtual ~Screen() {}

    virtual void onEnter() {}

    virtual void onExit() {}

    virtual void render(
        TFT_eSPI& display
    ) {}

    void invalidate() {

        dirty = true;
    }

    bool isDirty() {

        return dirty;
    }

    void validate() {

        dirty = false;
    }
};