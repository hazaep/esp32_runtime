#pragma once

#include <Arduino.h>
#include "Event.h"

#define MAX_LISTENERS 10

typedef void (*EventListener)(Event);

class EventBus {
private:
    EventListener listeners[MAX_LISTENERS];
    int listenerCount = 0;

public:
    void subscribe(EventListener listener);

    void emit(String eventName, String eventData);
};