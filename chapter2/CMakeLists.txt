cmake_minimum_required (VERSION 3.0) 
cmake_policy(SET CMP0012 NEW) 
PROJECT(project) 
 
# Requires OpenCV 
FIND_PACKAGE( OpenCV 4.0.0 REQUIRED ) 
MESSAGE("OpenCV version : ${OpenCV_VERSION}") 
 
include_directories(${OpenCV_INCLUDE_DIRS}) 
link_directories(${OpenCV_LIB_DIR}) 
 
ADD_EXECUTABLE(sample3 fileStorage.cpp) 
TARGET_LINK_LIBRARIES(sample3 ${OpenCV_LIBS})
