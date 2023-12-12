#ifndef DELIVEREDOBSERVER_H_
#define DELIVEREDOBSERVER_H_

#include "IObserver.h"

class DeliveredObserver : public IObserver {
 public:
    /**
     * @brief Constructor for DeliveredObserver.
     * @param controller Reference to the controller associated with the observer.
     */
    DeliveredObserver(IController& controller);

    /**
     * @brief Destructor for DeliveredObserver.
     */
    ~DeliveredObserver();

    /**
     * @brief Update function called when the observed entity is updated.
     * @param entity The entity that has been updated.
     */
    void update(const IEntity& entity) override;
};

#endif  // DELIVEREDOBSERVER_H_
