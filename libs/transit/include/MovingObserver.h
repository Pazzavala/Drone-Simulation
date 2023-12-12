#ifndef MOVINGOBSERVER_H_
#define MOVINGOBSERVER_H_

#include "IObserver.h"

class MovingObserver : public IObserver {
 public:
  /**
   * @brief Constructor for MovingObserver.
   * @param controller Reference to the controller associated with the observer.
   */
  MovingObserver(IController& controller);

  /**
   * @brief Destructor for MovingObserver.
   */
  virtual ~MovingObserver();

  /**
   * @brief Update function called when the observed entity is updated.
   * @param entity The entity that has been updated.
   */
  void update(const IEntity& entity) override;
};

#endif  // MOVINGOBSERVER_H_
