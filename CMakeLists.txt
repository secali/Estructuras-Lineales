
cmake_minimum_required(VERSION 3.24)
project(mi-proyecto-sencillo-de-clase
VERSION 0.1.0
DESCRIPTION "Mi proyecto de C++ para clase"
LANGUAGES CXX
)
add_executable(${PROJECT_NAME} main.cpp clase1.cpp clase2.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
set_target_properties(${PROJECT_NAME} PROPERTIES
CXX_EXTENSIONS OFF
RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/debug
RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/release
)
#-------------------------------------------------------------------
# integraciÃ³n de bibliotecas de terceros:
find_package(nlohmann_json REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json)
#-------------------------------------------------------------------
# polÃ-tica de avisos:
if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
target_compile_options(${PROJECT_NAME} PRIVATE /W3 /WX)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
endif()
#-------------------------------------------------------------------
# mensajes a emitir en construcciÃ³n:
message("-- CMake Generator: ${CMAKE_GENERATOR}")
get_target_property(CFEATURES ${PROJECT_NAME} COMPILE_FEATURES)
message("-- Target compile features: ${CFEATURES}")
get_target_property(COPTIONS ${PROJECT_NAME} COMPILE_OPTIONS)
message("-- Target compile options: ${COPTIONS}")
