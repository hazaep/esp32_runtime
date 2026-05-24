#include "EventBus.h"

void EventBus::on(
    String eventType,
    EventCallback callback
) {
    listeners[listenerCount++] = {
        eventType,
        callback
    };
}

void EventBus::emit(Event event) {

    Serial.printf(
        "[EVENT] %s\n",
        event.type.c_str()
    );

    for(int i = 0; i < listenerCount; i++) {

        if(listeners[i].eventType == event.type) {

            listeners[i].callback(event);
        }
    }
}