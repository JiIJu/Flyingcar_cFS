########################################################
#
# CMake Recipe to build doxygen documentation
#
########################################################

# This CMake script currently defines a top-level target
# to build the stand alone documentation.  This may be invoked either
# from the main CMakeLists.txt as a subdirectory (useful in the
# case of a self-contained/standalone build) or by a separate script
# (useful if integrating into a larger project with a separate doc build)

cmake_minimum_required(VERSION 3.5)
project(CS_DOCS NONE)

# generate the configuration files
configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/cs-common.doxyfile.in
        ${CMAKE_BINARY_DIR}/docs/cs-common.doxyfile
        @ONLY
)

configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/cs-usersguide.doxyfile.in
        ${CMAKE_CURRENT_BINARY_DIR}/cs-usersguide.doxyfile
        @ONLY
)

add_custom_command(OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/html/index.html" "${CMAKE_CURRENT_BINARY_DIR}/ALWAYSBUILD"
    COMMAND doxygen ${CMAKE_CURRENT_BINARY_DIR}/cs-usersguide.doxyfile
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
)

add_custom_target(cs-usersguide
    COMMAND echo "CS UsersGuide: file://${CMAKE_CURRENT_BINARY_DIR}/html/index.html"
    DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/ALWAYSBUILD"
)
