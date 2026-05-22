#pragma once

#include <Arduino.h>
#include "Event.h"

#define MAX_LISTENERS 10

typedef void (*EventCallback)(Event);

class EventBus {

private:

    struct Listener {

        String eventType;

        EventCallback callback;
    };

    Listener listeners[MAX_LISTENERS];

    int listenerCount = 0;

public:

    void on(String eventType, EventCallback callback);

    void emit(Event event);
};
