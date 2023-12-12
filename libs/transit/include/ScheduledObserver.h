#ifndef SCHEDULEDOBSERVER_H_
#define SCHEDULEDOBSERVER_H_

#include "IObserver.h"

class ScheduledObserver : public IObserver {
 public:
  /**
   * @brief Constructor for ScheduledObserver.
   * @param controller Reference to the controller associated with the observer.
   */
  ScheduledObserver(IController& controller);

  /**
   * @brief Destructor for ScheduledObserver.
   */
  virtual ~ScheduledObserver();

  /**
   * @brief Update function called when the observed entity is updated.
   * @param entity The entity that has been updated.
   */
  void update(const IEntity& entity) override;
};

#endif  // SCHEDULEDOBSERVE_H_
