#ifndef MASTODONTESTAPP_H
#define MASTODONTESTAPP_H

#include "MastodonApp.h"

class MastodonTestApp : public MastodonApp
{
public:
  MastodonTestApp(InputParameters parameters);
  static InputParameters validParams();
  static void registerApps();
  static void registerAll(Factory &, ActionFactory &, Syntax &, bool);
};

#endif /* MASTODONTESTAPP_H */
