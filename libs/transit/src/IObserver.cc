#include "IObserver.h"

IObserver::IObserver(IController& controller) : controller(controller) {}

IObserver::~IObserver() {}
