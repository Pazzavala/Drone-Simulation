#include "ScheduledObserver.h"

ScheduledObserver::ScheduledObserver(IController& controller)
    : IObserver(controller) {}

ScheduledObserver::~ScheduledObserver() {}

void ScheduledObserver::update(const IEntity& entity) {
    JsonObject details;
    details["value"] = "scheduled";
    details["droneId"] = std::to_string(entity.getSpecificId());
    // for robot and package
    details["itemId"] = std::to_string(entity.getPackageNumber());
    controller.sendEventToView("Notification", details);
}
