cmake_minimum_required(VERSION 3.3)

project(GameCircus_PacketManager)

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

enable_testing()

ADD_SUBDIRECTORY(libpkg)
ADD_SUBDIRECTORY(test)
