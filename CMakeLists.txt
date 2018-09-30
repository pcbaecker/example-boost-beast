cmake_minimum_required(VERSION 3.12)
project(example_boost_beast)
set(CMAKE_CXX_STANDARD 17)

set(OPENSSL_ROOT_DIR /usr/local/opt/openssl)
FIND_PACKAGE(OpenSSL REQUIRED)

set(BOOST_NETWORK_ENABLE_HTTPS)
FIND_PACKAGE( Boost 1.67 COMPONENTS program_options system REQUIRED )


INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} ${OPENSSL_INCLUDE_DIR})

add_executable(example_boost_beast main.cpp root_certificates.hpp HttpsRequest.cpp HttpsRequest.h)

TARGET_LINK_LIBRARIES(example_boost_beast LINK_PUBLIC ${Boost_LIBRARIES} ${OPENSSL_LIBRARIES})