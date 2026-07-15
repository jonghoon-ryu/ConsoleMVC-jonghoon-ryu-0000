#pragma once

#include <string>

#include "Model.h"

class View {
public:
    std::string Render(const Model& model) const {
        return "Value: " + std::to_string(model.GetValue());
    }
};
