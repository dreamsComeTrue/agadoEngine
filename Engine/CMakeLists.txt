cmake_minimum_required(VERSION 3.10)

# Remove trailing '\' and '/' at the end of the path, so can reliably compare
STRING(REGEX REPLACE "[/\\]+$" "" CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR})
STRING(REGEX REPLACE "[/\\]+$" "" CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(MODULE_FILES
	DLLEntryMain.cpp
	agadoEngine.cpp
    
    Common/EnginePCH.cpp
    
    Core/Log/Logger.cpp
)

add_definitions(-DAGADOENGINE_EXPORTS=1)

add_library(agadoEngine-${CMAKE_BUILD_TYPE} SHARED ${MODULE_FILES})
target_precompile_headers(agadoEngine-${CMAKE_BUILD_TYPE} PRIVATE Common/EnginePCH.h)

include(GenerateExportHeader)
generate_export_header(agadoEngine-${CMAKE_BUILD_TYPE})

# Make sure the compiler can find include files for our library
# when other libraries or executables link to Hello
target_include_directories(agadoEngine-${CMAKE_BUILD_TYPE} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS agadoEngine-${CMAKE_BUILD_TYPE} DESTINATION Binaries)