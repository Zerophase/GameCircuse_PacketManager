cmake_minimum_required(VERSION 3.3)

INCLUDE_DIRECTORIES(/home/zerophase/ClionProjects/GameCircus_PacketManager/build/test/gmock/src/gmock/include
        /home/zerophase/ClionProjects/GameCircus_PacketManager/build/test/gtest/src/gtest/include)
file(GLOB SRCS *.cpp)

add_executable(testpkgmanager ${SRCS})

target_link_libraries(testpkgmanager
        libpkg
        libgtest
        libgmock
        )

add_test(NAME testfoo COMMAND testfoo)