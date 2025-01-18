# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(physics_engine)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the "src" directory to the include path
include_directories(include)

# Get all the C++ files in the "src" directory
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

# Download and build Raylib
include(FetchContent)
FetchContent_Declare(
  raylib
  GIT_REPOSITORY https://github.com/raysan5/raylib.git
  GIT_TAG 3.7.0
)
FetchContent_MakeAvailable(raylib)

# Create the executable target and link Raylib
add_executable(physics_engine ${SOURCE_FILES})
target_link_libraries(physics_engine raylib)
