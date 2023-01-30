cmake_minimum_required(VERSION 3.22.5)

project(OLAS VERSION 1.0)
configure_file(OLASConfig.h.in OLASConfig.h)

# add_executable(${PROJECT_NAME} src/main.cpp src/adder.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)

# add_subdirectory(lib/adder)
add_subdirectory(external/glfw)

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(GLFW_BUILD_EXAMPLES "Build the GLFW example programs" ${GLFW_STANDALONE})
option(GLFW_BUILD_TESTS "Build the GLFW test programs" ${GLFW_STANDALONE})
option(GLFW_BUILD_DOCS "Build the GLFW documentation" ON)
option(GLFW_INSTALL "Generate installation target" ON)
option(GLFW_VULKAN_STATIC "Assume the Vulkan loader is linked with the application" OFF)

# Add USE_ADDER option correspoinding to the logic as below
option(USE_ADDER "A simple library for adding 2 floats." ON)
if(USE_ADDER)
    add_subdirectory(lib/adder)
    list(APPEND EXTRA_INCLUDE_DIRS "lib/adder")
    list(APPEND EXTRA_LIB_DIRS "lib/adder")
    list(APPEND EXTRA_LINKS adder)
endif()

#           DOWNLOAD ALL THE SUBMODULES
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

#           CHECK ALL THE SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
    message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()


target_include_directories(${PROJECT_NAME} PUBLIC 
    ${PROJECT_BINARY_DIR}
    # lib/adder/
    external/glfw/include
    ${EXTRA_INCLUDE_DIRS}
    )

# Build the link between the root_directory and the library_directory
target_link_directories(${PROJECT_NAME} PRIVATE 
    # lib/adder/
    external/glfw/src
    ${EXTRA_LIB_DIRS}
    )
# Build the link between the project and the library
# target_link_libraries(${PROJECT_NAME} adder glfw)
target_link_libraries(${PROJECT_NAME} ${EXTRA_LINKS} glfw)


# if(USE_ADDER)
#     add_subdirectory(lib/adder)
#     target_include_directories(${PROJECT_NAME} PUBLIC lib/adder)
#     target_link_directories(${PROJECT_NAME} PRIVATE lib/adder)
#     target_link_libraries(${PROJECT_NAME} adder)
# endif()
