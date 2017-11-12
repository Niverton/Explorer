#include "view.h"

#include <Wt/WHBoxLayout.h>

using namespace Wt;

View::View(WContainerWidget* root)
  : root_(root) {
  
  { //Global Layout
  auto l = std::make_unique<WHBoxLayout>();
  left_panel_ = l->addWidget(std::make_unique<WPanel>());
  right_panel_ = l->addWidget(std::make_unique<WPanel>());

  root_->setLayout(std::move(l));
  }

  left_panel_->setTitle("Tree");
  right_panel_->setTitle("List");
  
  file_tree_ = left_panel_->setCentralWidget(std::make_unique<WTree>());
  file_list_ = right_panel_->setCentralWidget(std::make_unique<WTable>());

  
}
