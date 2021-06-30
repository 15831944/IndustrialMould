cmake_minimum_required(VERSION 3.17)
project(IndustrialMould)

set(CMAKE_CXX_STANDARD 14)

add_executable(IndustrialMould main.cpp DrawingProcess/DrawingProcess.cpp DrawingProcess/DrawingProcess.h DrawingProcess/Drawing.cpp DrawingProcess/Drawing.h DrawingProcess/CuttingEdgeAndPunchingRoundHoles.cpp DrawingProcess/CuttingEdgeAndPunchingRoundHoles.h DrawingProcess/FlangingSizing.cpp DrawingProcess/FlangingSizing.h)
