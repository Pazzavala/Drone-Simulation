#include "PickedUpObserver.h"

PickedUpObserver::PickedUpObserver(IController& controller)
    : IObserver(controller) {}

PickedUpObserver::~PickedUpObserver() {}

void PickedUpObserver::update(const IEntity& entity) {
    JsonObject details;
    details["value"] = "pickedup";
    details["droneId"] = std::to_string(entity.getSpecificId());
    // for robot and package
    details["itemId"] = std::to_string(entity.getPackageNumber());
    controller.sendEventToView("Notification", details);
}
