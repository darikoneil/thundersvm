//
// Created by jiashuai on 17-9-15.
//
#include "gtest/gtest.h"
#include "thundersvm/util/log.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
