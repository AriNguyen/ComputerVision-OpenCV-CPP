cmake_minimum_required(VERSION 3.0.0)
cmake_policy(SET CMP0012 NEW) 

PROJECT(classification)

FIND_PACKAGE(OpenCV 4.0.0 REQUIRED)
MESSAGE("OpenCV Version: ${OpenCV_VERSION}")

INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})
LINK_DIRECTORIES(${OpenCV_LIB_DIR})

ADD_EXECUTABLE(experiment experiment.cpp)
TARGET_LINK_LIBRARIES(experiment ${OpenCV_LIBS})