#include <Wt/WPanel.h>
#include <Wt/WTree.h>
#include <Wt/WTable.h>

class View {
  public:
    View(Wt::WContainerWidget* root);

  private:
    Wt::WContainerWidget*     root_;

    Wt::WPanel*               left_panel_;
    Wt::WPanel*               right_panel_;
    
    Wt::WTree*                file_tree_;
    Wt::WTable*               file_list_;
};
