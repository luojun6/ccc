cmake_minimum_required(VERSION 3.22.5)

project(OLAS)

# add_executable(${PROJECT_NAME} src/main.cpp src/adder.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(lib/adder)
add_subdirectory(external/glfw)

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(GLFW_BUILD_EXAMPLES "Build the GLFW example programs" ${GLFW_STANDALONE})
option(GLFW_BUILD_TESTS "Build the GLFW test programs" ${GLFW_STANDALONE})
option(GLFW_BUILD_DOCS "Build the GLFW documentation" ON)
option(GLFW_INSTALL "Generate installation target" ON)
option(GLFW_VULKAN_STATIC "Assume the Vulkan loader is linked with the application" OFF)


target_include_directories(${PROJECT_NAME} PUBLIC 
    lib/adder/
    external/glfw/include
    )

# Build the link between the root_directory and the library_directory
target_link_directories(${PROJECT_NAME} PRIVATE 
    lib/adder/
    external/glfw/src
    )
# Build the link between the project and the library
target_link_libraries(${PROJECT_NAME} adder glfw)