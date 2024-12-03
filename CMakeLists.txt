cmake_minimum_required(VERSION 3.5.0)

project(TestQt CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH "C:\\Qt\\6.7.3\\mingw_64\\lib\\cmake")

add_executable(TestQt main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}/Zc:__cplusplu")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

target_link_libraries(TestQt
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets)