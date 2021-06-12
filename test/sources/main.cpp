// [2021y-06m-08d][22:48:19] Idrisov Denis R.  
// [2021y-06m-08d][22:48:19] birthday of the project  
#include <mygtest/main.hpp>
//==============================================================================
//==============================================================================

GTEST_API_ int main(int argc, char** argv)
{
    // example settings:
    //   test.ext --gtest_filter=tools.stopwatch* --stress
    //   testing::GTEST_FLAG(filter) = "tools.stopwatch_*";
    return ::testing::run(argc, argv);
}

//==============================================================================
//==============================================================================
