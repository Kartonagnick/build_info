# WorkSpace project.
# Module of tools: build_info
# [2021y-07m-02d] [10:35:00] Idrisov Denis R.
# [2021y-06m-13d] [00:05:00] Idrisov Denis R.
################################################################################
################################################################################

set(gDEBUG "$ENV{eDEBUG}")
cmake_minimum_required(VERSION 3.1)

include("${CMAKE_CURRENT_LIST_DIR}/setup.cmake")
cmake_scenario("minimalist")

project(${gNAME_PROJECT} CXX)

################################################################################
################################################################################

if(gSTABLE_RELEASE)
    message(STATUS "gSTABLE_RELEASE: ON")
else()
    message(STATUS "gSTABLE_RELEASE: OFF")
endif()

make_target()

make_target(
    PATH_TO_SOURCES "test"
#    PREPROCESSOR 
#        "dHIDE_CLANG_MESSAGE=1"
#        "dHIDE_MINGW_MESSAGE=1"
#        "dHIDE_MSVC_MESSAGE=1"
#        "dHIDE_GCC_MESSAGE=1"
)

make_target(PATH_TO_SOURCES "example/dmessage")
make_target(PATH_TO_SOURCES "example/shared")
make_target(PATH_TO_SOURCES "example/static")

################################################################################
################################################################################

