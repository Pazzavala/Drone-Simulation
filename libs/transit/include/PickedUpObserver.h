#ifndef PICKEDUPOBSERVER_H_
#define PICKEDUPOBSERVER_H_

#include "IObserver.h"

class PickedUpObserver : public IObserver {
 public:
    /**
     * @brief Constructor for PickedUpObserver.
     * @param controller Reference to the controller associated with the observer.
     */
    PickedUpObserver(IController& controller);

    /**
     * @brief Destructor for PickedUpObserver.
     */
    ~PickedUpObserver();

    /**
     * @brief Update function called when the observed entity is updated.
     * @param entity The entity that has been updated.
     */
    void update(const IEntity& entity) override;
};

#endif   // PICKEDUPOBSERVER_H_
