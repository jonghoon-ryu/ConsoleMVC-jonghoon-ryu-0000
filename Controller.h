#pragma once

#include <string>

#include "Model.h"
#include "View.h"

class Controller {
public:
    Controller(Model& model, View& view) : model_(model), view_(view) {}

    void UpdateValue(int value) { model_.SetValue(value); }

    std::string GetView() const { return view_.Render(model_); }

private:
    Model& model_;
    View& view_;
};
