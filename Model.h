#pragma once

class Model {
public:
    void SetValue(int value) { value_ = value; }
    int GetValue() const { return value_; }

private:
    int value_ = 0;
};
