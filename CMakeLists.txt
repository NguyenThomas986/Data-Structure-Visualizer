cmake_minimum_required(VERSION 3.28)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.2
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

include_directories(src)

add_executable(DataStructureVisualizer 
              src/main.cpp
              src/UI/Menu.cpp
              src/UI/Button.cpp)

add_custom_command(
    TARGET DataStructureVisualizer POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/src/UI/Fonts
            $<TARGET_FILE_DIR:DataStructureVisualizer>/UI/Fonts
)



target_compile_features(DataStructureVisualizer PRIVATE cxx_std_17)
target_link_libraries(DataStructureVisualizer PRIVATE SFML::Graphics)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT DataStructureVisualizer)