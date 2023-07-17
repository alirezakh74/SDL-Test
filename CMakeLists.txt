cmake_minimum_required(VERSION 3.7)

#[[
set( CMAKE_CXX_COMPILER "D:/ModernCpp/Compilers/mingw64/bin" )
set( CMAKE_C_COMPILER "D:/ModernCpp/Compilers/mingw64/bin" )
]]

project(SDL2Test #[[LANGUAGES CXX]])

#[[
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
]]

#[[
set(SDL2_INCLUDE_DIRS C:/SDL2/x86_64-w64-mingw32/include)
set(SDL2_LIBRARIES C:/SDL2/x86_64-w64-mingw32/lib/libSDL2.a)
]]

set(CMAKE_PREFIX_PATH C:/SDL2/x86_64-w64-mingw32)
set(SDL2_DIR C:/SDL2/cmake)
find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDL2Test main.cpp src/core/Game.cpp)
target_link_libraries(SDL2Test ${SDL2_LIBRARIES} -lmingw32 -lSDL2main -lSDL2 -mwindows)