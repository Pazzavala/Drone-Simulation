#include "DeliveredObserver.h"

DeliveredObserver::DeliveredObserver(IController& controller)
    : IObserver(controller) {}

DeliveredObserver::~DeliveredObserver() {}

void DeliveredObserver::update(const IEntity& entity) {
    JsonObject details;
    details["value"] = "delivered";
    details["droneId"] = std::to_string(entity.getSpecificId());
    // for robot and package
    details["itemId"] = std::to_string(entity.getPackageNumber());
    controller.sendEventToView("Notification", details);
}
