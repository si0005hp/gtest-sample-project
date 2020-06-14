#include <gtest/gtest.h>

#include "lib.h"

TEST(example_test, t1) {
    SomeLib lib;
    ASSERT_EQ(3, lib.sum(1, 2));
}

TEST(example_test, t2) {
    SomeLib lib;
    ASSERT_EQ(3, lib.sum(1, 3));
}
