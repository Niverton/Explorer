#include "controller.h"

#include <Wt/WApplication.h>

class ExplorerApplication : public Wt::WApplication {
  public:
    ExplorerApplication(const Wt::WEnvironment &env);
    
  private:
    Controller ctrl_;
    
};
