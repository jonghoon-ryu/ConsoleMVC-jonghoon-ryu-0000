#include "gtest/gtest.h"

#include "Controller.h"
#include "Model.h"
#include "View.h"

TEST(SampleTest, BasicAssertion) {
    EXPECT_EQ(1 + 1, 2);
}

TEST(MVCSkeletonTest, ControllerUpdatesModelAndView) {
    Model model;
    View view;
    Controller controller(model, view);

    controller.UpdateValue(42);

    EXPECT_EQ(model.GetValue(), 42);
    EXPECT_EQ(controller.GetView(), "Value: 42");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
