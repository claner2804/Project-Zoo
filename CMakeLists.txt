cmake_minimum_required(VERSION 3.27)
project(Zoo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Zoo main.cpp
        exceptions.h
        zoo.h
        zoo.cpp
        tier.h
        tier.cpp
        fleischfresser.h
        fleischfresser.cpp
        pflanzenfresser.cpp
        dachs.h
        dachs.cpp
        tiger.h
        tiger.cpp
        elephant.h
        elephant.cpp
        panda.h
        panda.cpp
        futter.h
        futter.cpp
        fleisch.h
        fleisch.cpp
        pflanzen.h
        pflanzen.cpp
        bambus.h
        bambus.cpp
        gras.h
        gras.cpp)
