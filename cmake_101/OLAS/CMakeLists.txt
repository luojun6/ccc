cmake_minimum_required(VERSION 3.22.5)

project(OLAS)

# add_executable(${PROJECT_NAME} src/main.cpp src/adder.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(lib/adder)
target_include_directories(${PROJECT_NAME} PUBLIC lib/adder/)

# Build the link between the root_directory and the library_directory
target_link_directories(${PROJECT_NAME} PRIVATE lib/adder/)
# Build the link between the project and the library
target_link_libraries(${PROJECT_NAME} adder)