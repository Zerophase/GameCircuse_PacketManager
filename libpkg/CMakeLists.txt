cmake_minimum_required(VERSION 3.3)
project(GameCircus_PacketManager)

set(libpkg_SRCS
        NetworkConnection.cpp NetworkConnection.h
        PacketManager.cpp PacketManager.h
        )

add_library(libpkg STATIC ${libpkg_SRCS})

target_include_directories(libpkg PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})