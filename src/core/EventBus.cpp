#include "EventBus.h"

void EventBus::subscribe(EventListener listener) {
    if (listenerCount < MAX_LISTENERS) {
        listeners[listenerCount] = listener;
        listenerCount++;
    }
}

void EventBus::emit(String eventName, String eventData) {

    Event event;
    event.name = eventName;
    event.data = eventData;

    Serial.println("\n[EVENT EMITTED]");
    Serial.println(event.name);
    Serial.println(event.data);

    for (int i = 0; i < listenerCount; i++) {
        listeners[i](event);
    }
}