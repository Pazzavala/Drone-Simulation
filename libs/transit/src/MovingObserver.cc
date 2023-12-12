#include "MovingObserver.h"
#include <string>

MovingObserver::MovingObserver(IController& controller)
    : IObserver(controller) {}

MovingObserver::~MovingObserver() {}

void MovingObserver::update(const IEntity& entity) {
    JsonObject details;
    details["value"] = "moving";
    details["droneId"] = std::to_string(entity.getSpecificId());
    // for robot and package
    details["itemId"] = std::to_string(entity.getPackageNumber());
    controller.sendEventToView("Notification", details);
}
