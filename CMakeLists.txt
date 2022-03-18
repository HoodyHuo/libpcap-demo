cmake_minimum_required(VERSION 3.19)
project(libcap)

set(CMAKE_CXX_STANDARD 14)

include(FindPCAP.cmake)
#find_package(PCAP REQUIRED)
#set_directory_properties(PCAP_DIR /usr/include/pcap)
#include_directories(${PCAPPLUSPLUS_INCLUDE_DIRS})

add_executable(libcap main.cpp)
#
target_link_libraries(libcap ${PCAP_LIBRARY})