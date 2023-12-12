#ifndef IOBSERVER_H_
#define IOBSERVER_H_

#include "IController.h"
#include "IEntity.h"
#include "util/json.h"

class IObserver {
 protected:
  IController& controller;

 public:
  /**
   * @brief Default constructor that create the IObserver object.
   * @param controller is assigned to our IObserver controller attribute.
   */
  IObserver(IController& controller);
  /**
   * @brief Destructor
   */
  ~IObserver();
  /**
   * @brief Update function that sends a message to our font end to be displayed.
   * @param entity that will be displayed.
  */
  virtual void update(const IEntity& entity) = 0;
};

#endif
