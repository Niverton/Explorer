#include "view.h"
#include "model.h"

class Controller {
  public:
    Controller(Wt::WContainerWidget* root);

  private:
    View view_;
    Model model_;
};
